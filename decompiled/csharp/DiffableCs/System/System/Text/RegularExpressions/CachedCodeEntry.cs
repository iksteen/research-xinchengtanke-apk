namespace System.Text.RegularExpressions;

internal sealed class CachedCodeEntry
{
	internal string _key; //Field offset: 0x10
	internal RegexCode _code; //Field offset: 0x18
	internal Hashtable _caps; //Field offset: 0x20
	internal Hashtable _capnames; //Field offset: 0x28
	internal String[] _capslist; //Field offset: 0x30
	internal int _capsize; //Field offset: 0x38
	internal RegexRunnerFactory _factory; //Field offset: 0x40
	internal ExclusiveReference _runnerref; //Field offset: 0x48
	internal SharedReference _replref; //Field offset: 0x50

	internal CachedCodeEntry(string key, Hashtable capnames, String[] capslist, RegexCode code, Hashtable caps, int capsize, ExclusiveReference runner, SharedReference repl) { }

}

