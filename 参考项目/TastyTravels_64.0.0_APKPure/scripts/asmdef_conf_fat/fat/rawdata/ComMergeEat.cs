using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeEat : ProtoBaseProxy<ComMergeEat>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<int> _repeated_changeid_codec;

		public readonly RepeatedField<int> Changeid;

		public bool Controllable;

		public static readonly FieldCodec<string> _repeated_eat_codec;

		public readonly RepeatedField<string> Eat;

		public static readonly FieldCodec<int> _repeated_fixedEat_codec;

		public readonly RepeatedField<int> FixedEat;

		public RandomMethodType RandomMethod;

		public static readonly FieldCodec<int> _repeated_weight_codec;

		public readonly RepeatedField<int> Weight;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeEat()
		{
		}

		public ComMergeEat(ComMergeEat other)
		{
		}

		public override ComMergeEat Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
