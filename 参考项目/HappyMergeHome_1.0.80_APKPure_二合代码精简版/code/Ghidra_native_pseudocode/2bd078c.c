
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be078c(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_02be08e0 + 0x2be07a4);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be08e4 + 0x2be07b8));
    func_0x01438628(*(undefined4 *)(_UNK_02be08e8 + 0x2be07c4));
    func_0x01438628(*(undefined4 *)(_UNK_02be08ec + 0x2be07d0));
    func_0x01438628(*(undefined4 *)(_UNK_02be08f0 + 0x2be07dc));
    *pcVar10 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x5c67,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x5c67,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar5 + 8);
    uVar9 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar5 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02be08f4 + 0x2be0838) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02be08f8 + 0x2be0854));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  func_0x029a6fa8(iVar5,param_2,0);
  if (*(int *)(**(int **)(_UNK_02be08fc + 0x2be0884) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x0202346c(0);
  iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02be0900 + 0x2be08ac));
  func_0x02025440(iVar8,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  pcVar10 = (char *)(_UNK_02025110 + 0x2024d28);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02025114 + 0x2024d3c),iVar8,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_02025118 + 0x2024d48));
    func_0x01438628(*(undefined4 *)(_UNK_0202511c + 0x2024d54));
    func_0x01438628(*(undefined4 *)(_UNK_02025120 + 0x2024d60));
    func_0x01438628(*(undefined4 *)(_UNK_02025124 + 0x2024d6c));
    func_0x01438628(*(undefined4 *)(_UNK_02025128 + 0x2024d78));
    func_0x01438628(*(undefined4 *)(_UNK_0202512c + 0x2024d84));
    func_0x01438628(*(undefined4 *)(_UNK_02025130 + 0x2024d90));
    func_0x01438628(*(undefined4 *)(_UNK_02025134 + 0x2024d9c));
    func_0x01438628(*(undefined4 *)(_UNK_02025138 + 0x2024da8));
    func_0x01438628(*(undefined4 *)(_UNK_0202513c + 0x2024db4));
    *pcVar10 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iVar2 = func_0x02953fd4(0x6a6,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02025140 + 0x2024e38));
    func_0x0282fa2c(iVar2,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar8 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar2 + 0xc) = uVar9;
    uVar9 = func_0x01524ffc(iVar8 + 0xc,0);
    func_0x02835c34(iVar2,uVar9,0);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar8 + 0x10);
    uVar9 = func_0x01524ffc(iVar8 + 0x14,0);
    func_0x02835cd4(iVar2,uVar9,0);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar8 + 0x18);
    uVar9 = func_0x01524ffc(iVar8 + 0x1c,0);
    func_0x02835d74(iVar2,uVar9,0);
    uVar9 = *(undefined4 *)(iVar8 + 0x28);
    uVar1 = *(undefined2 *)(iVar8 + 0x24);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar8 + 0x20);
    *(undefined2 *)(iVar2 + 0x28) = uVar1;
    func_0x02835e74(iVar2,uVar9,0);
    if (*(int *)(**(int **)(_UNK_02025144 + 0x2024ef8) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar7 = *(undefined4 **)(_UNK_02025148 + 0x2024f14);
    iVar3 = func_0x014e9518(*puVar7);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar9 = FUN_02bd7e48(iVar3,0,0);
    uVar6 = *puVar7;
    *(undefined4 *)(iVar2 + 0x2c) = uVar9;
    iVar3 = func_0x014e9518(uVar6);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar9 = FUN_02bde980(iVar3,0,0);
    uVar6 = *puVar7;
    *(undefined4 *)(iVar2 + 0x30) = uVar9;
    iVar3 = func_0x014e9518(uVar6);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar9 = FUN_02bdedf8(iVar3,0,0);
    iVar4 = *(int *)(iVar8 + 0x2c);
    *(undefined4 *)(iVar2 + 0x34) = uVar9;
    iVar3 = 1;
    if ((iVar4 != 0) &&
       (iVar4 = func_0x024ef040(iVar4,**(undefined4 **)(_UNK_0202514c + 0x2024fb8)), 0 < iVar4)) {
      iVar8 = *(int *)(iVar8 + 0x2c);
      iStack_48 = 1;
      iStack_44 = iVar5;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x024eee58(&uStack_40,iVar8,**(undefined4 **)(_UNK_02025150 + 0x2024fec));
      puVar7 = *(undefined4 **)(_UNK_02025154 + 0x2025004);
      puVar11 = *(undefined4 **)(_UNK_02025158 + 0x202500c);
      while (iVar8 = func_0x0151618c(&uStack_40,*puVar7), iVar5 = iStack_30, uVar9 = uStack_34,
            iVar8 != 0) {
        iVar8 = *(int *)(iVar2 + 0x48);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        func_0x024f3070(iVar8,uVar9,iVar5,*puVar11);
      }
      func_0x024eee68(&uStack_40,**(undefined4 **)(_UNK_0202515c + 0x2025058));
      iVar3 = iStack_48;
      iVar5 = iStack_44;
    }
    if (iVar3 != 0) {
      func_0x020240e8(iVar5,iVar2);
    }
  }
  else {
    iVar2 = func_0x029540a4(0x6a6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_50 = 0;
    func_0x02869ba4(iVar2,iVar5,iVar8,1);
  }
  return;
}

