namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class OperationCanceledException : SystemException
{
	private CancellationToken _cancellationToken; //Field offset: 0x88

	public private CancellationToken CancellationToken
	{
		 get { } //Length: 8
		private set { } //Length: 12
	}

	public OperationCanceledException() { }

	public OperationCanceledException(string message) { }

	public OperationCanceledException(string message, CancellationToken token) { }

	protected OperationCanceledException(SerializationInfo info, StreamingContext context) { }

	public CancellationToken get_CancellationToken() { }

	private void set_CancellationToken(CancellationToken value) { }

}

