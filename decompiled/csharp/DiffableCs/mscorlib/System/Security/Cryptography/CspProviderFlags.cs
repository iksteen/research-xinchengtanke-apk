namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum CspProviderFlags
{
	NoFlags = 0,
	UseMachineKeyStore = 1,
	UseDefaultKeyContainer = 2,
	UseNonExportableKey = 4,
	UseExistingKey = 8,
	UseArchivableKey = 16,
	UseUserProtectedKey = 32,
	NoPrompt = 64,
	CreateEphemeralKey = 128,
}

