namespace MG_BlocksEngine2.Core;

public class BE2_EventsManager
{
	private Dictionary<BE2EventTypes, UnityEvent> _eventDictionary; //Field offset: 0x10
	private Dictionary<BE2EventTypesBlock, BE2_Event> _eventDictionaryBlock; //Field offset: 0x18

	public BE2_EventsManager() { }

	public void StartListening(BE2EventTypes eventName, UnityAction listener) { }

	public void StartListening(BE2EventTypesBlock eventName, UnityAction<I_BE2_Block> listener) { }

	public void StopListening(BE2EventTypes eventName, UnityAction listener) { }

	public void StopListening(BE2EventTypesBlock eventName, UnityAction<I_BE2_Block> listener) { }

	public void TriggerEvent(BE2EventTypes eventName) { }

	public void TriggerEvent(BE2EventTypesBlock eventName, I_BE2_Block block) { }

}

