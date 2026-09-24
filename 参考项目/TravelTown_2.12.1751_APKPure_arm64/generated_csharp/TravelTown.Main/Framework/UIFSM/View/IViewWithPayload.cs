namespace Framework.UIFSM.View
{
	public interface IViewWithPayload<TPayload>
	{
		void SetPayload(TPayload payload);
	}
}
