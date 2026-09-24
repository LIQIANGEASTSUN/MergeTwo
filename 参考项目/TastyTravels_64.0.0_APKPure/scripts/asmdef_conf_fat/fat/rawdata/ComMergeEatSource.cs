using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeEatSource : ProtoBaseProxy<ComMergeEatSource>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public string EatingIcon;

		public string OuputIcon;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_eat_codec;

		public readonly RepeatedField<string> Eat;

		public int EatTime;

		public int EnergyCost;

		public static readonly FieldCodec<string> _repeated_fixedEat_codec;

		public readonly RepeatedField<string> FixedEat;

		public int LimitCount;

		public static readonly FieldCodec<int> _repeated_outputs_codec;

		public readonly RepeatedField<int> Outputs;

		public static readonly FieldCodec<int> _repeated_outputsFixed_codec;

		public readonly RepeatedField<int> OutputsFixed;

		public static readonly FieldCodec<int> _repeated_outputsFixedTime_codec;

		public readonly RepeatedField<int> OutputsFixedTime;

		public static readonly FieldCodec<int> _repeated_outputsWeight_codec;

		public readonly RepeatedField<int> OutputsWeight;

		public string SpawnSfx;

		public int SpeedCost;

		public static readonly FieldCodec<int> _repeated_weight_codec;

		public readonly RepeatedField<int> Weight;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeEatSource()
		{
		}

		public ComMergeEatSource(ComMergeEatSource other)
		{
		}

		public override ComMergeEatSource Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
