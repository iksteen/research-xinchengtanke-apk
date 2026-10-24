namespace System.Threading;

public static class LazyInitializer
{

	public static T EnsureInitialized(ref T target, Func<T> valueFactory) { }

	private static T EnsureInitializedCore(ref T target, Func<T> valueFactory) { }

}

