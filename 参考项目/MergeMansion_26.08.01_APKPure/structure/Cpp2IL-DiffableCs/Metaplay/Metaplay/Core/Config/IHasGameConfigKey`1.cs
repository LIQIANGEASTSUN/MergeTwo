namespace Metaplay.Core.Config;

public interface IHasGameConfigKey
{

	public TGameConfigKey ConfigKey
	{
		 get { } //Length: 0
	}

	public TGameConfigKey get_ConfigKey() { }

}

