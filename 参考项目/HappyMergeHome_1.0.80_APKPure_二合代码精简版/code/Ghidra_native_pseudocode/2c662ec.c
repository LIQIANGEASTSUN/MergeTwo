
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c762ec(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
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
  
  pcVar11 = (char *)(_UNK_02c76544 + 0x2c76304);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c76548 + 0x2c76318));
    func_0x01438628(*(undefined4 *)(_UNK_02c7654c + 0x2c76324));
    func_0x01438628(*(undefined4 *)(_UNK_02c76550 + 0x2c76330));
    func_0x01438628(*(undefined4 *)(_UNK_02c76554 + 0x2c7633c));
    func_0x01438628(*(undefined4 *)(_UNK_02c76558 + 0x2c76348));
    func_0x01438628(*(undefined4 *)(_UNK_02c7655c + 0x2c76354));
    func_0x01438628(*(undefined4 *)(_UNK_02c76560 + 0x2c76360));
    func_0x01438628(*(undefined4 *)(_UNK_02c76564 + 0x2c7636c));
    func_0x01438628(*(undefined4 *)(_UNK_02c76568 + 0x2c76378));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x6002,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x6002,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c7656c + 0x2c763d4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c76570 + 0x2c763f0));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x029a6fa8(iVar3,param_2,0);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_02c76574 + 0x2c7642c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x0202346c(0);
    iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c76578 + 0x2c76454));
    func_0x02025440(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0x2c);
    uVar10 = **(undefined4 **)(_UNK_02c7657c + 0x2c76488);
    *(undefined1 *)(iVar4 + 0x25) = 1;
    *(undefined4 *)(iVar4 + 8) = 8;
    *(undefined4 *)(iVar4 + 0xc) = uVar6;
    *(undefined4 *)(iVar4 + 0x10) = uVar7;
    iVar5 = func_0x014388d4(uVar10);
    func_0x04752f54(iVar5,**(undefined4 **)(_UNK_02c76580 + 0x2c764ac));
    uVar10 = func_0x01524ffc(iVar3 + 0x50,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x04753a34(iVar5,**(undefined4 **)(_UNK_02c76588 + 0x2c764ec),uVar10,
                    **(undefined4 **)(_UNK_02c76584 + 0x2c764e0));
    *(int *)(iVar4 + 0x2c) = iVar5;
    func_0x014385cc((int *)(iVar4 + 0x2c),iVar5);
    *(undefined4 *)(iVar4 + 0x28) = **(undefined4 **)(_UNK_02c7658c + 0x2c76510);
    func_0x014385cc();
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    pcVar11 = (char *)(_UNK_02025110 + 0x2024d28);
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02025114 + 0x2024d3c),iVar4,1,0);
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
      *pcVar11 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iVar3 = func_0x02953fd4(0x6a6,0);
    if (iVar3 == 0) {
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02025140 + 0x2024e38));
      func_0x0282fa2c(iVar3,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar10 = *(undefined4 *)(iVar4 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar3 + 0xc) = uVar10;
      uVar10 = func_0x01524ffc(iVar4 + 0xc,0);
      func_0x02835c34(iVar3,uVar10,0);
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar4 + 0x10);
      uVar10 = func_0x01524ffc(iVar4 + 0x14,0);
      func_0x02835cd4(iVar3,uVar10,0);
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar4 + 0x18);
      uVar10 = func_0x01524ffc(iVar4 + 0x1c,0);
      func_0x02835d74(iVar3,uVar10,0);
      uVar10 = *(undefined4 *)(iVar4 + 0x28);
      uVar1 = *(undefined2 *)(iVar4 + 0x24);
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined2 *)(iVar3 + 0x28) = uVar1;
      func_0x02835e74(iVar3,uVar10,0);
      if (*(int *)(**(int **)(_UNK_02025144 + 0x2024ef8) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar8 = *(undefined4 **)(_UNK_02025148 + 0x2024f14);
      iVar5 = func_0x014e9518(*puVar8);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar10 = FUN_02bd7e48(iVar5,0,0);
      uVar6 = *puVar8;
      *(undefined4 *)(iVar3 + 0x2c) = uVar10;
      iVar5 = func_0x014e9518(uVar6);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar10 = FUN_02bde980(iVar5,0,0);
      uVar6 = *puVar8;
      *(undefined4 *)(iVar3 + 0x30) = uVar10;
      iVar5 = func_0x014e9518(uVar6);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar10 = FUN_02bdedf8(iVar5,0,0);
      iVar2 = *(int *)(iVar4 + 0x2c);
      *(undefined4 *)(iVar3 + 0x34) = uVar10;
      iVar5 = 1;
      if ((iVar2 != 0) &&
         (iVar2 = func_0x024ef040(iVar2,**(undefined4 **)(_UNK_0202514c + 0x2024fb8)), 0 < iVar2)) {
        iVar4 = *(int *)(iVar4 + 0x2c);
        iStack_48 = 1;
        iStack_44 = iVar9;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024eee58(&uStack_40,iVar4,**(undefined4 **)(_UNK_02025150 + 0x2024fec));
        puVar8 = *(undefined4 **)(_UNK_02025154 + 0x2025004);
        puVar12 = *(undefined4 **)(_UNK_02025158 + 0x202500c);
        while (iVar4 = func_0x0151618c(&uStack_40,*puVar8), iVar9 = iStack_30, uVar10 = uStack_34,
              iVar4 != 0) {
          iVar4 = *(int *)(iVar3 + 0x48);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x024f3070(iVar4,uVar10,iVar9,*puVar12);
        }
        func_0x024eee68(&uStack_40,**(undefined4 **)(_UNK_0202515c + 0x2025058));
        iVar5 = iStack_48;
        iVar9 = iStack_44;
      }
      if (iVar5 != 0) {
        func_0x020240e8(iVar9,iVar3);
      }
    }
    else {
      iVar3 = func_0x029540a4(0x6a6,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uStack_50 = 0;
      func_0x02869ba4(iVar3,iVar9,iVar4,1);
    }
    return;
  }
  return;
}

