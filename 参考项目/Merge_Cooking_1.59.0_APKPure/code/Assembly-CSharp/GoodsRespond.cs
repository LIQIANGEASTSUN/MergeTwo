using TLF;

public class GoodsRespond : IRespond
{
	public void Process(object data)
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide() || Singleton<TFStoryManager>.Instance.IsStorying || Singleton<TaskManager>.Instance.GetDoingFinishTaskLogic())
		{
			ObjectManager.GetInstance().itemDataModel.SyncServerData(data);
		}
		else
		{
			ObjectManager.GetInstance().itemDataModel.SyncServerData(data, needNotice: true);
		}
	}

	public void SpecialProcess(object data)
	{
		ObjectManager.GetInstance().itemDataModel.DataConflictChange(data);
	}

	public object Toobtain()
	{
		return ObjectManager.GetInstance().itemDataModel.GetItemDataToServer();
	}
}
