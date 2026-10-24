namespace MS.Internal.Xml.XPath;

internal class XPathParser
{
	private class ParamInfo
	{
		private FunctionType ftype; //Field offset: 0x10
		private int minargs; //Field offset: 0x14
		private int maxargs; //Field offset: 0x18
		private XPathResultType[] argTypes; //Field offset: 0x20

		public XPathResultType[] ArgTypes
		{
			 get { } //Length: 8
		}

		public FunctionType FType
		{
			 get { } //Length: 8
		}

		public int Maxargs
		{
			 get { } //Length: 8
		}

		public int Minargs
		{
			 get { } //Length: 8
		}

		internal ParamInfo(FunctionType ftype, int minargs, int maxargs, XPathResultType[] argTypes) { }

		public XPathResultType[] get_ArgTypes() { }

		public FunctionType get_FType() { }

		public int get_Maxargs() { }

		public int get_Minargs() { }

	}

	private static readonly XPathResultType[] temparray1; //Field offset: 0x0
	private static readonly XPathResultType[] temparray2; //Field offset: 0x8
	private static readonly XPathResultType[] temparray3; //Field offset: 0x10
	private static readonly XPathResultType[] temparray4; //Field offset: 0x18
	private static readonly XPathResultType[] temparray5; //Field offset: 0x20
	private static readonly XPathResultType[] temparray6; //Field offset: 0x28
	private static readonly XPathResultType[] temparray7; //Field offset: 0x30
	private static readonly XPathResultType[] temparray8; //Field offset: 0x38
	private static readonly XPathResultType[] temparray9; //Field offset: 0x40
	private static Hashtable functionTable; //Field offset: 0x48
	private static Hashtable AxesTable; //Field offset: 0x50
	private XPathScanner scanner; //Field offset: 0x10
	private int parseDepth; //Field offset: 0x18

	private static XPathParser() { }

	private XPathParser(XPathScanner scanner) { }

	private void CheckNodeSet(XPathResultType t) { }

	private void CheckToken(LexKind t) { }

	private static Hashtable CreateAxesTable() { }

	private static Hashtable CreateFunctionTable() { }

	private AxisType GetAxis(XPathScanner scaner) { }

	private static bool IsNodeType(XPathScanner scaner) { }

	private static bool IsPrimaryExpr(XPathScanner scanner) { }

	private static bool IsStep(LexKind lexKind) { }

	private void NextLex() { }

	private AstNode ParseAdditiveExpr(AstNode qyInput) { }

	private AstNode ParseAndExpr(AstNode qyInput) { }

	private AstNode ParseEqualityExpr(AstNode qyInput) { }

	private AstNode ParseExpresion(AstNode qyInput) { }

	private AstNode ParseFilterExpr(AstNode qyInput) { }

	private AstNode ParseLocationPath(AstNode qyInput) { }

	private AstNode ParseMethod(AstNode qyInput) { }

	private AstNode ParseMultiplicativeExpr(AstNode qyInput) { }

	private AstNode ParseNodeTest(AstNode qyInput, AxisType axisType, XPathNodeType nodeType) { }

	private AstNode ParseOrExpr(AstNode qyInput) { }

	private AstNode ParsePathExpr(AstNode qyInput) { }

	private AstNode ParsePredicate(AstNode qyInput) { }

	private AstNode ParsePrimaryExpr(AstNode qyInput) { }

	private AstNode ParseRelationalExpr(AstNode qyInput) { }

	private AstNode ParseRelativeLocationPath(AstNode qyInput) { }

	private AstNode ParseStep(AstNode qyInput) { }

	private AstNode ParseUnaryExpr(AstNode qyInput) { }

	private AstNode ParseUnionExpr(AstNode qyInput) { }

	public static AstNode ParseXPathExpresion(string xpathExpresion) { }

	private void PassToken(LexKind t) { }

	private bool TestOp(string op) { }

}

