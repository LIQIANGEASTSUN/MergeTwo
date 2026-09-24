using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EnergyBoost : ProtoBaseProxy<EnergyBoost>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int ActiveLv;

		public int BoostLevel;

		public int BoostRate;

		public int Guide;

		public bool IsExchange;

		public bool IsPassive;

		public bool IsToastMax;

		public int RequireEnergyNum;

		public int RewardNum;

		public int XXX_RowIdentifier { get; set; }

		public EnergyBoost()
		{
		}

		public EnergyBoost(EnergyBoost other)
		{
		}

		public override EnergyBoost Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
