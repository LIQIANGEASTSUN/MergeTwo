namespace Metaplay.Core.Activables;

public interface IMetaActivableInfo : IMetaActivableInfo
{

	public TId ActivableId
	{
		 get { } //Length: 0
	}

	public TId get_ActivableId() { }

}

