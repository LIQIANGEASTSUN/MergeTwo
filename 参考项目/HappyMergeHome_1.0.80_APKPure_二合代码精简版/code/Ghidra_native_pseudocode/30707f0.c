
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030807f0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03080aa8 + 0x3080808);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03080aac + 0x308081c));
    func_0x01438628(*(undefined4 *)(_UNK_03080ab0 + 0x3080828));
    func_0x01438628(*(undefined4 *)(_UNK_03080ab4 + 0x3080834));
    func_0x01438628(*(undefined4 *)(_UNK_03080ab8 + 0x3080840));
    func_0x01438628(*(undefined4 *)(_UNK_03080abc + 0x308084c));
    func_0x01438628(*(undefined4 *)(_UNK_03080ac0 + 0x3080858));
    func_0x01438628(*(undefined4 *)(_UNK_03080ac4 + 0x3080864));
    func_0x01438628(*(undefined4 *)(_UNK_03080ac8 + 0x3080870));
    func_0x01438628(*(undefined4 *)(_UNK_03080acc + 0x308087c));
    func_0x01438628(*(undefined4 *)(_UNK_03080ad0 + 0x3080888));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7553,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03080ad4 + 0x30808f8));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03080ad8 + 0x308090c));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03080adc + 0x3080930) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03080ae0 + 0x308094c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370baf0(iVar1,**(undefined4 **)(_UNK_03080ae4 + 0x308096c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03080ae8 + 0x3080998));
      puVar5 = *(undefined4 **)(_UNK_03080aec + 0x30809ac);
      puVar7 = *(undefined4 **)(_UNK_03080af0 + 0x30809b4);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03080af4 + 0x3080a0c));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7553,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029189ac(iVar1,param_1,0);
  }
  return iVar1;
}

