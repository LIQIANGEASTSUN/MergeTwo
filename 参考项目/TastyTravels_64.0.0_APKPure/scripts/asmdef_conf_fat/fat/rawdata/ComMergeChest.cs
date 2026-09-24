using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeChest : ProtoBaseProxy<ComMergeChest>, IRowIdentifier<string>
	{
		public static readonly string FullName;

		public int ConfigVersion;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Capacity;

		public int EnergyCost;

		public bool Frozen;

		public static readonly FieldCodec<int> _repeated_outputs_codec;

		public readonly RepeatedField<int> Outputs;

		public static readonly FieldCodec<int> _repeated_outputsSelectOne_codec;

		public readonly RepeatedField<int> OutputsSelectOne;

		public static readonly FieldCodec<int> _repeated_outputsWeight_codec;

		public readonly RepeatedField<int> OutputsWeight;

		public int SpeedCost;

		public int WaitTime;

		public string XXX_RowIdentifier { get; set; }

		public ComMergeChest()
		{
		}

		public ComMergeChest(ComMergeChest other)
		{
		}

		public override ComMergeChest Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
