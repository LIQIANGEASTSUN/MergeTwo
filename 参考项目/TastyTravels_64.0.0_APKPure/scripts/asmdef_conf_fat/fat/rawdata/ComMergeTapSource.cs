using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeTapSource : ProtoBaseProxy<ComMergeTapSource>, IRowIdentifier<string>
	{
		public static readonly string FullName;

		public int ConfigVersion;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_costId_codec;

		public readonly RepeatedField<int> CostId;

		public int DeadItem;

		public static readonly MapField<int, int>.Codec _map_dieInto_codec;

		public readonly MapField<int, int> DieInto;

		public int EnergyCost;

		public int FirstOutputTime;

		public bool Frozen;

		public bool IsBoostItem;

		public bool IsBoostable;

		public bool IsCategroyInfo;

		public bool IsFillClear;

		public bool IsJumpable;

		public bool IsSkipDieAnime;

		public bool IsUseNormalToast;

		public int LimitCount;

		public static readonly MapField<int, int>.Codec _map_maxToast_codec;

		public readonly MapField<int, int> MaxToast;

		public static readonly FieldCodec<int> _repeated_maxToastNew_codec;

		public readonly RepeatedField<int> MaxToastNew;

		public int OutputCount;

		public int OutputTime;

		public static readonly FieldCodec<int> _repeated_outputsFixed_codec;

		public readonly RepeatedField<int> OutputsFixed;

		public static readonly FieldCodec<int> _repeated_outputsFixedTime_codec;

		public readonly RepeatedField<int> OutputsFixedTime;

		public static readonly MapField<int, int>.Codec _map_outputsToast_codec;

		public readonly MapField<int, int> OutputsToast;

		public int ReviveCount;

		public int ReviveTime;

		public string SpawnSfx;

		public int SpeedCost;

		public int StageCount;

		public string XXX_RowIdentifier { get; set; }

		public ComMergeTapSource()
		{
		}

		public ComMergeTapSource(ComMergeTapSource other)
		{
		}

		public override ComMergeTapSource Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
