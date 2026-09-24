
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c58e78(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = (char *)(_UNK_02c58f24 + 0x2c58e88);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c58f28 + 0x2c58e9c));
    func_0x01438628(*(undefined4 *)(_UNK_02c58f2c + 0x2c58ea8));
    func_0x01438628(*(undefined4 *)(_UNK_02c58f30 + 0x2c58eb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c58f34 + 0x2c58ec0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c58f38 + 0x2c58ed4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x02af0724(0);
  puVar3 = *(undefined4 **)(_UNK_02c58f44 + 0x2c58f0c);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(_UNK_02c58f40 + 0x2c58f04);
  }
  (*(code *)&SUB_04f5b548)(**(undefined4 **)(_UNK_02c58f3c + 0x2c58efc),*puVar3,0);
  return;
}

