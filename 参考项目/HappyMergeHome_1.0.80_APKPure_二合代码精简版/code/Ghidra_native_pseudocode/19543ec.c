
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019643ec(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_019647bc + 0x19643fc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019647c0 + 0x1964410));
    func_0x01438628(*(undefined4 *)(_UNK_019647c4 + 0x196441c));
    func_0x01438628(*(undefined4 *)(_UNK_019647c8 + 0x1964428));
    func_0x01438628(*(undefined4 *)(_UNK_019647cc + 0x1964434));
    func_0x01438628(*(undefined4 *)(_UNK_019647d0 + 0x1964440));
    func_0x01438628(*(undefined4 *)(_UNK_019647d4 + 0x196444c));
    func_0x01438628(*(undefined4 *)(_UNK_019647d8 + 0x1964458));
    func_0x01438628(*(undefined4 *)(_UNK_019647dc + 0x1964464));
    func_0x01438628(*(undefined4 *)(_UNK_019647e0 + 0x1964470));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1619,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1619,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar6 = *(int **)(_UNK_019647e4 + 0x19644c4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01959198();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_01961d3c(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01959198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_019594e8(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_019647e8 + 0x1964544) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_01959198();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_019600b0(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_019647ec + 0x19645cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019647f0 + 0x19645e8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_019647f4 + 0x1964608));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar4 = *(undefined4 **)(_UNK_019647fc + 0x1964684);
          func_0x024f05a8(0,0x50,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x51,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x52,*puVar4);
          func_0x014388e4();
        }
        else {
          puVar4 = *(undefined4 **)(_UNK_019647f8 + 0x1964640);
          func_0x024f05a8(iVar1,0x50,*puVar4);
          func_0x024f05a8(iVar1,0x51,*puVar4);
          func_0x024f05a8(iVar1,0x52,*puVar4);
        }
        func_0x024f05a8(iVar1,0x53,**(undefined4 **)(_UNK_01964800 + 0x19646c4));
        if (*(int *)(**(int **)(_UNK_01964804 + 0x19646d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01964808 + 0x19646f4));
        piVar6 = (int *)FUN_01959198();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_0196480c + 0x1964734);
        iVar8 = *(int *)(iVar7 + 0x1c);
        if (iVar8 == 0) {
          func_0x014909d8(iVar7);
          iVar8 = *(int *)(iVar7 + 0x1c);
        }
        iVar8 = *(int *)(iVar8 + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar5,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

