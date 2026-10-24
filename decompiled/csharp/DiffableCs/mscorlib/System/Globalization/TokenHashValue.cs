namespace System.Globalization;

internal class TokenHashValue
{
	internal string tokenString; //Field offset: 0x10
	internal TokenType tokenType; //Field offset: 0x18
	internal int tokenValue; //Field offset: 0x1C

	internal TokenHashValue(string tokenString, TokenType tokenType, int tokenValue) { }

}

