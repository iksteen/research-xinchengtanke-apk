package com.unity3d.player;

import java.lang.invoke.MethodHandles;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Proxy;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
final class ReflectionHelper {
    protected static boolean LOG = false;
    protected static final boolean LOGV = false;

    /* JADX INFO: renamed from: a */
    private static C0015a[] f38a = new C0015a[4096];

    /* JADX INFO: renamed from: b */
    private static long f39b = 0;

    /* JADX INFO: renamed from: c */
    private static long f40c = 0;

    /* JADX INFO: renamed from: d */
    private static boolean f41d = false;

    /* JADX INFO: renamed from: com.unity3d.player.ReflectionHelper$a */
    private static class C0015a {

        /* JADX INFO: renamed from: a */
        public volatile Member f50a;

        /* JADX INFO: renamed from: b */
        private final Class f51b;

        /* JADX INFO: renamed from: c */
        private final String f52c;

        /* JADX INFO: renamed from: d */
        private final String f53d;

        /* JADX INFO: renamed from: e */
        private final int f54e;

        C0015a(Class cls, String str, String str2) {
            this.f51b = cls;
            this.f52c = str;
            this.f53d = str2;
            this.f54e = ((((cls.hashCode() + 527) * 31) + this.f52c.hashCode()) * 31) + this.f53d.hashCode();
        }

        public final boolean equals(Object obj) {
            if (obj == this) {
                return true;
            }
            if (obj instanceof C0015a) {
                C0015a c0015a = (C0015a) obj;
                if (this.f54e == c0015a.f54e && this.f53d.equals(c0015a.f53d) && this.f52c.equals(c0015a.f52c) && this.f51b.equals(c0015a.f51b)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return this.f54e;
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.ReflectionHelper$b */
    private static class RunnableC0016b implements Runnable {

        /* JADX INFO: renamed from: a */
        final long f55a;

        /* JADX INFO: renamed from: b */
        final long f56b;

        public RunnableC0016b(long j, long j2) {
            this.f55a = j;
            this.f56b = j2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (ReflectionHelper.beginProxyCall(this.f55a)) {
                try {
                    ReflectionHelper.nativeProxyFinalize(this.f56b);
                } finally {
                    ReflectionHelper.endProxyCall();
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.unity3d.player.ReflectionHelper$c */
    protected interface InterfaceC0017c extends InvocationHandler {
        /* JADX INFO: renamed from: a */
        void mo32a(long j, boolean z);
    }

    ReflectionHelper() {
    }

    /* JADX INFO: renamed from: a */
    private static float m21a(Class cls, Class cls2) {
        if (cls.equals(cls2)) {
            return 1.0f;
        }
        if (cls.isPrimitive() || cls2.isPrimitive()) {
            return 0.0f;
        }
        try {
            if (cls.asSubclass(cls2) != null) {
                return 0.5f;
            }
        } catch (ClassCastException unused) {
        }
        try {
            return cls2.asSubclass(cls) != null ? 0.1f : 0.0f;
        } catch (ClassCastException unused2) {
            return 0.0f;
        }
    }

    /* JADX INFO: renamed from: a */
    private static float m22a(Class cls, Class[] clsArr, Class[] clsArr2) {
        if (clsArr2.length == 0) {
            return 0.1f;
        }
        int i = 0;
        if ((clsArr == null ? 0 : clsArr.length) + 1 != clsArr2.length) {
            return 0.0f;
        }
        float f = 1.0f;
        if (clsArr != null) {
            int length = clsArr.length;
            float fM21a = 1.0f;
            int i2 = 0;
            while (i < length) {
                fM21a *= m21a(clsArr[i], clsArr2[i2]);
                i++;
                i2++;
            }
            f = fM21a;
        }
        return f * m21a(cls, clsArr2[clsArr2.length - 1]);
    }

    /* JADX INFO: renamed from: a */
    private static Class m24a(String str, int[] iArr) {
        while (iArr[0] < str.length()) {
            int i = iArr[0];
            iArr[0] = i + 1;
            char cCharAt = str.charAt(i);
            if (cCharAt != '(' && cCharAt != ')') {
                if (cCharAt == 'L') {
                    int iIndexOf = str.indexOf(59, iArr[0]);
                    if (iIndexOf == -1) {
                        return null;
                    }
                    String strSubstring = str.substring(iArr[0], iIndexOf);
                    iArr[0] = iIndexOf + 1;
                    try {
                        return Class.forName(strSubstring.replace('/', '.'));
                    } catch (ClassNotFoundException unused) {
                        return null;
                    }
                }
                if (cCharAt == 'Z') {
                    return Boolean.TYPE;
                }
                if (cCharAt == 'I') {
                    return Integer.TYPE;
                }
                if (cCharAt == 'F') {
                    return Float.TYPE;
                }
                if (cCharAt == 'V') {
                    return Void.TYPE;
                }
                if (cCharAt == 'B') {
                    return Byte.TYPE;
                }
                if (cCharAt == 'C') {
                    return Character.TYPE;
                }
                if (cCharAt == 'S') {
                    return Short.TYPE;
                }
                if (cCharAt == 'J') {
                    return Long.TYPE;
                }
                if (cCharAt == 'D') {
                    return Double.TYPE;
                }
                if (cCharAt == '[') {
                    return Array.newInstance((Class<?>) m24a(str, iArr), 0).getClass();
                }
                C0053f.Log(5, "! parseType; " + cCharAt + " is not known!");
                return null;
            }
        }
        return null;
    }

    /* JADX INFO: renamed from: a */
    private static synchronized void m27a(C0015a c0015a, Member member) {
        c0015a.f50a = member;
        f38a[c0015a.hashCode() & (f38a.length - 1)] = c0015a;
    }

    /* JADX INFO: renamed from: a */
    private static synchronized boolean m28a(C0015a c0015a) {
        C0015a c0015a2 = f38a[c0015a.hashCode() & (f38a.length - 1)];
        if (!c0015a.equals(c0015a2)) {
            return false;
        }
        c0015a.f50a = c0015a2.f50a;
        return true;
    }

    /* JADX INFO: renamed from: a */
    private static Class[] m29a(String str) {
        Class clsM24a;
        int i = 0;
        int[] iArr = {0};
        ArrayList arrayList = new ArrayList();
        while (iArr[0] < str.length() && (clsM24a = m24a(str, iArr)) != null) {
            arrayList.add(clsM24a);
        }
        Class[] clsArr = new Class[arrayList.size()];
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            clsArr[i] = (Class) it.next();
            i++;
        }
        return clsArr;
    }

    protected static synchronized boolean beginProxyCall(long j) {
        boolean z;
        if (j == f39b) {
            f40c++;
            z = true;
        } else {
            z = false;
        }
        return z;
    }

    protected static synchronized void endProxyCall() {
        long j = f40c - 1;
        f40c = j;
        if (0 == j && f41d) {
            ReflectionHelper.class.notifyAll();
        }
    }

    protected static synchronized void endUnityLaunch() {
        try {
            f39b++;
            f41d = true;
            while (f40c > 0) {
                ReflectionHelper.class.wait();
            }
        } catch (InterruptedException unused) {
            C0053f.Log(6, "Interrupted while waiting for all proxies to exit.");
        }
        f41d = false;
    }

    protected static Constructor getConstructorID(Class cls, String str) {
        Constructor<?> constructor;
        C0015a c0015a = new C0015a(cls, com.sthjd.mylibrary.BuildConfig.FLAVOR, str);
        if (m28a(c0015a)) {
            constructor = (Constructor) c0015a.f50a;
        } else {
            Class[] clsArrM29a = m29a(str);
            float f = 0.0f;
            Constructor<?> constructor2 = null;
            for (Constructor<?> constructor3 : cls.getConstructors()) {
                float fM22a = m22a(Void.TYPE, constructor3.getParameterTypes(), clsArrM29a);
                if (fM22a > f) {
                    constructor2 = constructor3;
                    if (fM22a == 1.0f) {
                        break;
                    }
                    f = fM22a;
                }
            }
            m27a(c0015a, constructor2);
            constructor = constructor2;
        }
        if (constructor != null) {
            return constructor;
        }
        throw new NoSuchMethodError("<init>" + str + " in class " + cls.getName());
    }

    protected static Field getFieldID(Class cls, String str, String str2, boolean z) {
        Field field;
        Class superclass = cls;
        C0015a c0015a = new C0015a(superclass, str, str2);
        if (m28a(c0015a)) {
            field = (Field) c0015a.f50a;
        } else {
            Class[] clsArrM29a = m29a(str2);
            float f = 0.0f;
            Field field2 = null;
            while (superclass != null) {
                for (Field field3 : superclass.getDeclaredFields()) {
                    if (z == Modifier.isStatic(field3.getModifiers()) && field3.getName().compareTo(str) == 0) {
                        float fM22a = m22a(field3.getType(), (Class[]) null, clsArrM29a);
                        if (fM22a > f) {
                            field2 = field3;
                            if (fM22a == 1.0f) {
                                f = fM22a;
                                break;
                            }
                            f = fM22a;
                        } else {
                            continue;
                        }
                    }
                }
                if (f == 1.0f || superclass.isPrimitive() || superclass.isInterface() || superclass.equals(Object.class) || superclass.equals(Void.TYPE)) {
                    break;
                }
                superclass = superclass.getSuperclass();
            }
            m27a(c0015a, field2);
            field = field2;
        }
        if (field != null) {
            return field;
        }
        Object[] objArr = new Object[4];
        objArr[0] = z ? "static" : "non-static";
        objArr[1] = str;
        objArr[2] = str2;
        objArr[3] = superclass.getName();
        throw new NoSuchFieldError(String.format("no %s field with name='%s' signature='%s' in class L%s;", objArr));
    }

    protected static String getFieldSignature(Field field) {
        Class<?> type = field.getType();
        if (!type.isPrimitive()) {
            if (type.isArray()) {
                return type.getName().replace('.', '/');
            }
            return "L" + type.getName().replace('.', '/') + ";";
        }
        String name = type.getName();
        if ("boolean".equals(name)) {
            return "Z";
        }
        if ("byte".equals(name)) {
            return "B";
        }
        if ("char".equals(name)) {
            return "C";
        }
        if ("double".equals(name)) {
            return "D";
        }
        if ("float".equals(name)) {
            return "F";
        }
        if ("int".equals(name)) {
            return "I";
        }
        if ("long".equals(name)) {
            return "J";
        }
        return "short".equals(name) ? "S" : name;
    }

    protected static Method getMethodID(Class cls, String str, String str2, boolean z) {
        Method method;
        C0015a c0015a = new C0015a(cls, str, str2);
        if (m28a(c0015a)) {
            method = (Method) c0015a.f50a;
        } else {
            Class[] clsArrM29a = m29a(str2);
            float f = 0.0f;
            Method method2 = null;
            while (cls != null) {
                for (Method method3 : cls.getDeclaredMethods()) {
                    if (z == Modifier.isStatic(method3.getModifiers()) && method3.getName().compareTo(str) == 0) {
                        float fM22a = m22a(method3.getReturnType(), method3.getParameterTypes(), clsArrM29a);
                        if (fM22a > f) {
                            method2 = method3;
                            if (fM22a == 1.0f) {
                                f = fM22a;
                                break;
                            }
                            f = fM22a;
                        } else {
                            continue;
                        }
                    }
                }
                if (f == 1.0f || cls.isPrimitive() || cls.isInterface() || cls.equals(Object.class) || cls.equals(Void.TYPE)) {
                    break;
                }
                cls = cls.getSuperclass();
            }
            m27a(c0015a, method2);
            method = method2;
        }
        if (method != null) {
            return method;
        }
        Object[] objArr = new Object[4];
        objArr[0] = z ? "static" : "non-static";
        objArr[1] = str;
        objArr[2] = str2;
        objArr[3] = cls.getName();
        throw new NoSuchMethodError(String.format("no %s method with name='%s' signature='%s' in class L%s;", objArr));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static native void nativeProxyFinalize(long j);

    /* JADX INFO: Access modifiers changed from: private */
    public static native Object nativeProxyInvoke(long j, String str, Object[] objArr);

    /* JADX INFO: Access modifiers changed from: private */
    public static native void nativeProxyLogJNIInvokeException(long j);

    protected static Object newProxyInstance(UnityPlayer unityPlayer, long j, Class cls) {
        return newProxyInstance(unityPlayer, j, new Class[]{cls});
    }

    protected static Object newProxyInstance(final UnityPlayer unityPlayer, final long j, final Class[] clsArr) {
        return Proxy.newProxyInstance(ReflectionHelper.class.getClassLoader(), clsArr, new InterfaceC0017c() { // from class: com.unity3d.player.ReflectionHelper.1

            /* JADX INFO: renamed from: d */
            private Runnable f45d;

            /* JADX INFO: renamed from: e */
            private UnityPlayer f46e;

            /* JADX INFO: renamed from: f */
            private long f47f = ReflectionHelper.f39b;

            /* JADX INFO: renamed from: g */
            private long f48g;

            /* JADX INFO: renamed from: h */
            private boolean f49h;

            {
                this.f45d = new RunnableC0016b(ReflectionHelper.f39b, j);
                this.f46e = unityPlayer;
            }

            /* JADX INFO: renamed from: a */
            private Object m31a(Object obj, Method method, Object[] objArr) throws NoSuchMethodException {
                if (objArr == null) {
                    try {
                        objArr = new Object[0];
                    } catch (NoClassDefFoundError unused) {
                        C0053f.Log(6, String.format("Java interface default methods are only supported since Android Oreo", new Object[0]));
                        ReflectionHelper.nativeProxyLogJNIInvokeException(this.f48g);
                        return null;
                    }
                }
                Class<?> declaringClass = method.getDeclaringClass();
                Constructor declaredConstructor = MethodHandles.Lookup.class.getDeclaredConstructor(Class.class, Integer.TYPE);
                declaredConstructor.setAccessible(true);
                return ((MethodHandles.Lookup) declaredConstructor.newInstance(declaringClass, 2)).in(declaringClass).unreflectSpecial(method, declaringClass).bindTo(obj).invokeWithArguments(objArr);
            }

            @Override // com.unity3d.player.ReflectionHelper.InterfaceC0017c
            /* JADX INFO: renamed from: a */
            public final void mo32a(long j2, boolean z) {
                this.f48g = j2;
                this.f49h = z;
            }

            protected final void finalize() throws Throwable {
                this.f46e.queueGLThreadEvent(this.f45d);
                super.finalize();
            }

            @Override // java.lang.reflect.InvocationHandler
            public final Object invoke(Object obj, Method method, Object[] objArr) {
                long j2;
                if (!ReflectionHelper.beginProxyCall(this.f47f)) {
                    C0053f.Log(6, "Scripting proxy object was destroyed, because Unity player was unloaded.");
                    return null;
                }
                try {
                    this.f48g = 0L;
                    this.f49h = false;
                    Object objNativeProxyInvoke = ReflectionHelper.nativeProxyInvoke(j, method.getName(), objArr);
                    if (!this.f49h) {
                        if (this.f48g != 0) {
                            j2 = this.f48g;
                        }
                        return objNativeProxyInvoke;
                    }
                    if ((method.getModifiers() & 1024) == 0) {
                        return m31a(obj, method, objArr);
                    }
                    j2 = this.f48g;
                    ReflectionHelper.nativeProxyLogJNIInvokeException(j2);
                    return objNativeProxyInvoke;
                } finally {
                    ReflectionHelper.endProxyCall();
                }
            }
        });
    }

    protected static void setNativeExceptionOnProxy(Object obj, long j, boolean z) {
        ((InterfaceC0017c) Proxy.getInvocationHandler(obj)).mo32a(j, z);
    }
}
