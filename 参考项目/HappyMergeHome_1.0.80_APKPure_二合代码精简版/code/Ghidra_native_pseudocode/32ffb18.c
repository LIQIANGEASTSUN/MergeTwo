
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0330fb18(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0330fdd0 + 0x330fb30);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0330fdd4 + 0x330fb44));
    func_0x01438628(*(undefined4 *)(_UNK_0330fdd8 + 0x330fb50));
    func_0x01438628(*(undefined4 *)(_UNK_0330fddc + 0x330fb5c));
    func_0x01438628(*(undefined4 *)(_UNK_0330fde0 + 0x330fb68));
    func_0x01438628(*(undefined4 *)(_UNK_0330fde4 + 0x330fb74));
    func_0x01438628(*(undefined4 *)(_UNK_0330fde8 + 0x330fb80));
    func_0x01438628(*(undefined4 *)(_UNK_0330fdec + 0x330fb8c));
    func_0x01438628(*(undefined4 *)(_UNK_0330fdf0 + 0x330fb98));
    func_0x01438628(*(undefined4 *)(_UNK_0330fdf4 + 0x330fba4));
    func_0x01438628(*(undefined4 *)(_UNK_0330fdf8 + 0x330fbb0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x84f7,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0330fdfc + 0x330fc20));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0330fe00 + 0x330fc34));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0330fe04 + 0x330fc58) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0330fe08 + 0x330fc74));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e0bb0(iVar1,**(undefined4 **)(_UNK_0330fe0c + 0x330fc94));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_0330fe10 + 0x330fcc0));
      puVar5 = *(undefined4 **)(_UNK_0330fe14 + 0x330fcd4);
      puVar7 = *(undefined4 **)(_UNK_0330fe18 + 0x330fcdc);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_0330fe1c + 0x330fd34));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x84f7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0292115c(iVar1,param_1,0);
  }
  return iVar1;
}

