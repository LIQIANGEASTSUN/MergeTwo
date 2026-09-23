using Code.GameLogic.GameEvents;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace Code.GameLogic.ExtraSpawns
{
	public static class ExtraSpawnValueUtilities
	{
		public static F32 GetValue<TId>(TId id, F32 defaultValue, MetaDictionary<Currencies, F32> customValuesByCurrency, MetaDictionary<CoreSupportEventTokenId, F32> customValuesByCoreSupportEventTokenId)
		{
			return default(F32);
		}

		public static F32 GetValue<TId>(TId id, F32 defaultValue, MetaDictionary<TId, F32> customValuesById)
		{
			return default(F32);
		}
	}
}
