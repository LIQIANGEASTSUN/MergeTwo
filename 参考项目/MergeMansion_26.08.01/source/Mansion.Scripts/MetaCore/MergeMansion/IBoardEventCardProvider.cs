using Metacore.MergeMansion.Common.Options.Unity;
using Metaplay.Core.Activables;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Metacore.MergeMansion
{
	public interface IBoardEventCardProvider<T> where T : MetaActivableState
	{
		SerializableUnityOption<BoardEventCard<T>> BoardEventCardOption { get; }

		AssetReferenceT<Sprite> BoardEventCardThumbnail { get; }
	}
}
