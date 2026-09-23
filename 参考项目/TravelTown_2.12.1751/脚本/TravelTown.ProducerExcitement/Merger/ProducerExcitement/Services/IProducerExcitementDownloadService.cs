using RemoteSprites.Scripts.Runtime;

namespace Merger.ProducerExcitement.Services
{
	public interface IProducerExcitementDownloadService
	{
		RemoteSpriteLocation ExcitementSpriteLocation { get; }

		bool IsExcitementSpriteDownloaded();
	}
}
