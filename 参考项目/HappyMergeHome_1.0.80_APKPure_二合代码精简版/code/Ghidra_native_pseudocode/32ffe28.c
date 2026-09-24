
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0330fe28(int param_1)

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
  
  pcVar3 = (char *)(_UNK_033100e0 + 0x330fe40);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_033100e4 + 0x330fe54));
    func_0x01438628(*(undefined4 *)(_UNK_033100e8 + 0x330fe60));
    func_0x01438628(*(undefined4 *)(_UNK_033100ec + 0x330fe6c));
    func_0x01438628(*(undefined4 *)(_UNK_033100f0 + 0x330fe78));
    func_0x01438628(*(undefined4 *)(_UNK_033100f4 + 0x330fe84));
    func_0x01438628(*(undefined4 *)(_UNK_033100f8 + 0x330fe90));
    func_0x01438628(*(undefined4 *)(_UNK_033100fc + 0x330fe9c));
    func_0x01438628(*(undefined4 *)(_UNK_03310100 + 0x330fea8));
    func_0x01438628(*(undefined4 *)(_UNK_03310104 + 0x330feb4));
    func_0x01438628(*(undefined4 *)(_UNK_03310108 + 0x330fec0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x84eb,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0331010c + 0x330ff30));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03310110 + 0x330ff44));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03310114 + 0x330ff68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03310118 + 0x330ff84));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e0bb0(iVar1,**(undefined4 **)(_UNK_0331011c + 0x330ffa4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03310120 + 0x330ffd0));
      puVar5 = *(undefined4 **)(_UNK_03310124 + 0x330ffe4);
      puVar7 = *(undefined4 **)(_UNK_03310128 + 0x330ffec);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0331012c + 0x3310044));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x84eb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02921054(iVar1,param_1,0);
  }
  return iVar1;
}

