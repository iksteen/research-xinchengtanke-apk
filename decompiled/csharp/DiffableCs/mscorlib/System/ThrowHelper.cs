namespace System;

internal static class ThrowHelper
{

	private static Exception CreateArgumentNullException(ExceptionArgument argument) { }

	internal static string GetArgumentName(ExceptionArgument argument) { }

	internal static string GetResourceName(ExceptionResource resource) { }

	internal static void IfNullAndNullsAreIllegalThenThrow(object value, ExceptionArgument argName) { }

	internal static void ThrowArgumentException(ExceptionResource resource) { }

	internal static void ThrowArgumentNullException(ExceptionArgument argument) { }

	internal static void ThrowArgumentOutOfRangeException() { }

	internal static void ThrowArgumentOutOfRangeException(ExceptionArgument argument, ExceptionResource resource) { }

	internal static void ThrowInvalidOperationException(ExceptionResource resource) { }

	internal static void ThrowNotSupportedException(ExceptionResource resource) { }

	internal static void ThrowWrongValueTypeArgumentException(object value, Type targetType) { }

}

