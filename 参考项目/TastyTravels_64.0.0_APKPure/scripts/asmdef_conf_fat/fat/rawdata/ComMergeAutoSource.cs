using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeAutoSource : ProtoBaseProxy<ComMergeAutoSource>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int AutoVanishTime;

		public int DeadItem;

		public static readonly MapField<int, int>.Codec _map_dieInto_codec;

		public readonly MapField<int, int> DieInto;

		public int FirstOutputTime;

		public bool Frozen;

		public bool IsFillClear;

		public int Limit;

		public int OutputCount;

		public int OutputTime;

		public static readonly FieldCodec<int> _repeated_outputs_codec;

		public readonly RepeatedField<int> Outputs;

		public static readonly FieldCodec<int> _repeated_outputsFixed_codec;

		public readonly RepeatedField<int> OutputsFixed;

		public static readonly FieldCodec<int> _repeated_outputsFixedTime_codec;

		public readonly RepeatedField<int> OutputsFixedTime;

		public static readonly MapField<int, int>.Codec _map_outputsToast_codec;

		public readonly MapField<int, int> OutputsToast;

		public static readonly FieldCodec<int> _repeated_outputsWeight_codec;

		public readonly RepeatedField<int> OutputsWeight;

		public string SpawnSfx;

		public int SpeedCost;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeAutoSource()
		{
		}

		public ComMergeAutoSource(ComMergeAutoSource other)
		{
		}

		public override ComMergeAutoSource Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
