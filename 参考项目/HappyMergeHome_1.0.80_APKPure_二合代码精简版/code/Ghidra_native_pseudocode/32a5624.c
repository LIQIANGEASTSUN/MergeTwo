
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032b5624(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_032b58d4 + 0x32b5640);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b58d8 + 0x32b5654));
    func_0x01438628(*(undefined4 *)(_UNK_032b58dc + 0x32b5660));
    func_0x01438628(*(undefined4 *)(_UNK_032b58e0 + 0x32b566c));
    func_0x01438628(*(undefined4 *)(_UNK_032b58e4 + 0x32b5678));
    func_0x01438628(*(undefined4 *)(_UNK_032b58e8 + 0x32b5684));
    func_0x01438628(*(undefined4 *)(_UNK_032b58ec + 0x32b5690));
    func_0x01438628(*(undefined4 *)(_UNK_032b58f0 + 0x32b569c));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar6 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x82ae,0);
  if (iVar1 == 0) {
    iVar1 = FUN_032a8ec4(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_032b58f4 + 0x32b5720) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b58f8 + 0x32b573c));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar2,**(undefined4 **)(_UNK_032b58fc + 0x32b5780));
        puVar7 = *(undefined4 **)(_UNK_032b5900 + 0x32b5794);
        do {
          iVar2 = func_0x04878f14(&uStack_30,*puVar7);
          iVar1 = iStack_24;
          if (iVar2 == 0) {
            func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032b5904 + 0x32b5840));
            return 0;
          }
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar1 + 8) != param_2);
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032b5910 + 0x32b57cc));
        iVar2 = FUN_032a7be8(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar2 + 0x74);
        uVar6 = 1;
        uVar4 = *(uint *)(iVar1 + 0xc);
        bVar8 = *(uint *)(iVar2 + 0x70) < uVar4;
        iVar2 = (int)uVar4 >> 0x1f;
        if ((int)(iVar3 - (iVar2 + (uint)bVar8)) < 0 !=
            (SBORROW4(iVar3,iVar2) != SBORROW4(iVar3 - iVar2,(uint)bVar8))) {
          iVar2 = FUN_032a7be8(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = (uint)(*(int *)(iVar1 + 8) < *(int *)(iVar2 + 0x78));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x82ae,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02873a70(iVar1,param_1,param_2,0);
  }
  return uVar6;
}

