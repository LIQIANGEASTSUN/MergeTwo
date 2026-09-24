
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030d3b18(int param_1)

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
  
  pcVar3 = (char *)(_UNK_030d3dd0 + 0x30d3b30);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d3dd4 + 0x30d3b44));
    func_0x01438628(*(undefined4 *)(_UNK_030d3dd8 + 0x30d3b50));
    func_0x01438628(*(undefined4 *)(_UNK_030d3ddc + 0x30d3b5c));
    func_0x01438628(*(undefined4 *)(_UNK_030d3de0 + 0x30d3b68));
    func_0x01438628(*(undefined4 *)(_UNK_030d3de4 + 0x30d3b74));
    func_0x01438628(*(undefined4 *)(_UNK_030d3de8 + 0x30d3b80));
    func_0x01438628(*(undefined4 *)(_UNK_030d3dec + 0x30d3b8c));
    func_0x01438628(*(undefined4 *)(_UNK_030d3df0 + 0x30d3b98));
    func_0x01438628(*(undefined4 *)(_UNK_030d3df4 + 0x30d3ba4));
    func_0x01438628(*(undefined4 *)(_UNK_030d3df8 + 0x30d3bb0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x7715,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d3dfc + 0x30d3c20));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_030d3e00 + 0x30d3c34));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_030d3e04 + 0x30d3c58) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d3e08 + 0x30d3c74));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e7ac0(iVar1,**(undefined4 **)(_UNK_030d3e0c + 0x30d3c94));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_030d3e10 + 0x30d3cc0));
      puVar5 = *(undefined4 **)(_UNK_030d3e14 + 0x30d3cd4);
      puVar7 = *(undefined4 **)(_UNK_030d3e18 + 0x30d3cdc);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030d3e1c + 0x30d3d34));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x7715,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02919a74(iVar1,param_1,0);
  }
  return iVar1;
}

