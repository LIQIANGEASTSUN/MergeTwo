public class BaseEvent
{
	public string type;

	public object[] datas;

	public BaseEvent(string type)
	{
	}

	public BaseEvent(string type, params object[] datas)
	{
	}
}
