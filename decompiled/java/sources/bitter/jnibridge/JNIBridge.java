package bitter.jnibridge;

import java.lang.invoke.MethodHandles;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

/* JADX INFO: loaded from: classes.dex */
public class JNIBridge {

    /* JADX INFO: renamed from: bitter.jnibridge.JNIBridge$a */
    private static class C0000a implements InvocationHandler {

        /* JADX INFO: renamed from: a */
        private Object f0a = new Object[0];

        /* JADX INFO: renamed from: b */
        private long f1b;

        /* JADX INFO: renamed from: c */
        private Constructor f2c;

        public C0000a(long j) {
            this.f1b = j;
            try {
                Constructor declaredConstructor = MethodHandles.Lookup.class.getDeclaredConstructor(Class.class, Integer.TYPE);
                this.f2c = declaredConstructor;
                declaredConstructor.setAccessible(true);
            } catch (NoClassDefFoundError unused) {
                this.f2c = null;
            } catch (NoSuchMethodException unused2) {
                this.f2c = null;
            }
        }

        /* JADX INFO: renamed from: a */
        private Object m0a(Object obj, Method method, Object[] objArr) {
            if (objArr == null) {
                objArr = new Object[0];
            }
            Class<?> declaringClass = method.getDeclaringClass();
            return ((MethodHandles.Lookup) this.f2c.newInstance(declaringClass, 2)).in(declaringClass).unreflectSpecial(method, declaringClass).bindTo(obj).invokeWithArguments(objArr);
        }

        /* JADX INFO: renamed from: a */
        public final void m1a() {
            synchronized (this.f0a) {
                this.f1b = 0L;
            }
        }

        public final void finalize() {
            synchronized (this.f0a) {
                if (this.f1b == 0) {
                    return;
                }
                JNIBridge.delete(this.f1b);
            }
        }

        @Override // java.lang.reflect.InvocationHandler
        public final Object invoke(Object obj, Method method, Object[] objArr) {
            synchronized (this.f0a) {
                if (this.f1b == 0) {
                    return null;
                }
                try {
                    return JNIBridge.invoke(this.f1b, method.getDeclaringClass(), method, objArr);
                } catch (NoSuchMethodError e) {
                    if (this.f2c == null) {
                        System.err.println("JNIBridge error: Java interface default methods are only supported since Android Oreo");
                        throw e;
                    }
                    if ((method.getModifiers() & 1024) == 0) {
                        return m0a(obj, method, objArr);
                    }
                    throw e;
                }
            }
        }
    }

    static native void delete(long j);

    static void disableInterfaceProxy(Object obj) {
        if (obj != null) {
            ((C0000a) Proxy.getInvocationHandler(obj)).m1a();
        }
    }

    static native Object invoke(long j, Class cls, Method method, Object[] objArr);

    static Object newInterfaceProxy(long j, Class[] clsArr) {
        return Proxy.newProxyInstance(JNIBridge.class.getClassLoader(), clsArr, new C0000a(j));
    }
}
