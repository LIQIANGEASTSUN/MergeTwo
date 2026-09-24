
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030d3e28(int param_1)

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
  
  pcVar3 = (char *)(_UNK_030d40e0 + 0x30d3e40);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d40e4 + 0x30d3e54));
    func_0x01438628(*(undefined4 *)(_UNK_030d40e8 + 0x30d3e60));
    func_0x01438628(*(undefined4 *)(_UNK_030d40ec + 0x30d3e6c));
    func_0x01438628(*(undefined4 *)(_UNK_030d40f0 + 0x30d3e78));
    func_0x01438628(*(undefined4 *)(_UNK_030d40f4 + 0x30d3e84));
    func_0x01438628(*(undefined4 *)(_UNK_030d40f8 + 0x30d3e90));
    func_0x01438628(*(undefined4 *)(_UNK_030d40fc + 0x30d3e9c));
    func_0x01438628(*(undefined4 *)(_UNK_030d4100 + 0x30d3ea8));
    func_0x01438628(*(undefined4 *)(_UNK_030d4104 + 0x30d3eb4));
    func_0x01438628(*(undefined4 *)(_UNK_030d4108 + 0x30d3ec0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x76eb,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d410c + 0x30d3f30));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_030d4110 + 0x30d3f44));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_030d4114 + 0x30d3f68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d4118 + 0x30d3f84));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e7ac0(iVar1,**(undefined4 **)(_UNK_030d411c + 0x30d3fa4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_030d4120 + 0x30d3fd0));
      puVar5 = *(undefined4 **)(_UNK_030d4124 + 0x30d3fe4);
      puVar7 = *(undefined4 **)(_UNK_030d4128 + 0x30d3fec);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030d412c + 0x30d4044));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x76eb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02919864(iVar1,param_1,0);
  }
  return iVar1;
}

