using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class ComChoiceBox : ProtoBaseProxy<ComChoiceBox>
	{
		public static readonly string FullName;

		public static readonly FieldCodec<int> _repeated_choices_codec;

		public readonly RepeatedField<int> Choices;

		public bool Fallback;

		public static readonly FieldCodec<int> _repeated_relateCommonOrders_codec;

		public readonly RepeatedField<int> RelateCommonOrders;

		public static readonly FieldCodec<int> _repeated_relateRandomOrders_codec;

		public readonly RepeatedField<int> RelateRandomOrders;

		public ComChoiceBox()
		{
		}

		public ComChoiceBox(ComChoiceBox other)
		{
		}

		public override ComChoiceBox Clone()
		{
			return null;
		}

		public override void InternalWriteTo(ref WriteContext output)
		{
		}

		public override int ProxyCalculateSize()
		{
			return 0;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
