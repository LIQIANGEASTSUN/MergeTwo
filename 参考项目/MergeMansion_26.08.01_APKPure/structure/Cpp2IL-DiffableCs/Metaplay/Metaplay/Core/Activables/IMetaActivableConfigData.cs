namespace Metaplay.Core.Activables;

public interface IMetaActivableConfigData : IGameConfigData, IMetaActivableInfo
{

	public string Description
	{
		 get { } //Length: 0
	}

	public string DisplayName
	{
		 get { } //Length: 0
	}

	public string DisplayShortInfo
	{
		 get { } //Length: 0
	}

	public MetaActivableTimelineSettings Timeline
	{
		 get { } //Length: 8
	}

	public string get_Description() { }

	public string get_DisplayName() { }

	public string get_DisplayShortInfo() { }

	public MetaActivableTimelineSettings get_Timeline() { }

}

