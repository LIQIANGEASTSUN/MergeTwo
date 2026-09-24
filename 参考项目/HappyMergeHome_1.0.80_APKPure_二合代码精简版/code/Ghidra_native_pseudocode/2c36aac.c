
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c46aac(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_02c46bd0 + 0x2c46ac0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c46bd4 + 0x2c46ad4));
    func_0x01438628(*(undefined4 *)(_UNK_02c46bd8 + 0x2c46ae0));
    func_0x01438628(*(undefined4 *)(_UNK_02c46bdc + 0x2c46aec));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar5 = *(int *)(param_1 + 0x10);
    piVar2 = *(int **)(_UNK_02c46be4 + 0x2c46b68);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c46be8 + 0x2c46b88));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    FUN_02ba3b0c(iVar3,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    puVar1 = (undefined4 *)(iVar5 + 0x5c);
    *puVar1 = 0;
    func_0x014385cc(puVar1,0);
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02c46be0 + 0x2c46b1c);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar6 = func_0x014388d4(*puVar1);
      func_0x024ef218(uVar6,0x3dcccccd,0);
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar6);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar6;
}

