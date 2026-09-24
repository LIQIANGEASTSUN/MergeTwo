
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c30f54(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_02c310e4 + 0x2c30f68);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c310e8 + 0x2c30f7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c310ec + 0x2c30f88));
    func_0x01438628(*(undefined4 *)(_UNK_02c310f0 + 0x2c30f94));
    func_0x01438628(*(undefined4 *)(_UNK_02c310f4 + 0x2c30fa0));
    *pcVar9 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x5ef8,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x5ef8,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar8 = *(int *)(iVar4 + 8);
    uVar10 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar4 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&iStack_30,uVar6,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c310f8 + 0x2c30ff8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c310fc + 0x2c31014));
  uVar10 = FUN_02c1969c(param_1);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x029a6fa8(iVar4,uVar10,0);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_02c31100 + 0x2c3105c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = func_0x0202346c(0);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c31104 + 0x2c31084));
    func_0x02025440(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined1 *)(iVar5 + 0x25) = 1;
    uVar10 = *(undefined4 *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(iVar5 + 8) = 4;
    *(undefined4 *)(iVar5 + 0xc) = uVar10;
    *(undefined4 *)(iVar5 + 0x10) = uVar6;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    pcVar9 = (char *)(_UNK_02025110 + 0x2024d28);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02025114 + 0x2024d3c),iVar5,1,0);
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
      *pcVar9 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iVar4 = func_0x02953fd4(0x6a6,0);
    if (iVar4 == 0) {
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02025140 + 0x2024e38));
      func_0x0282fa2c(iVar4,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar10 = *(undefined4 *)(iVar5 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar4 + 0xc) = uVar10;
      uVar10 = func_0x01524ffc(iVar5 + 0xc,0);
      func_0x02835c34(iVar4,uVar10,0);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar5 + 0x10);
      uVar10 = func_0x01524ffc(iVar5 + 0x14,0);
      func_0x02835cd4(iVar4,uVar10,0);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar5 + 0x18);
      uVar10 = func_0x01524ffc(iVar5 + 0x1c,0);
      func_0x02835d74(iVar4,uVar10,0);
      uVar10 = *(undefined4 *)(iVar5 + 0x28);
      uVar1 = *(undefined2 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined2 *)(iVar4 + 0x28) = uVar1;
      func_0x02835e74(iVar4,uVar10,0);
      if (*(int *)(**(int **)(_UNK_02025144 + 0x2024ef8) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar7 = *(undefined4 **)(_UNK_02025148 + 0x2024f14);
      iVar2 = func_0x014e9518(*puVar7);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = FUN_02bd7e48(iVar2,0,0);
      uVar6 = *puVar7;
      *(undefined4 *)(iVar4 + 0x2c) = uVar10;
      iVar2 = func_0x014e9518(uVar6);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = FUN_02bde980(iVar2,0,0);
      uVar6 = *puVar7;
      *(undefined4 *)(iVar4 + 0x30) = uVar10;
      iVar2 = func_0x014e9518(uVar6);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar10 = FUN_02bdedf8(iVar2,0,0);
      iVar3 = *(int *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar4 + 0x34) = uVar10;
      iVar2 = 1;
      if ((iVar3 != 0) &&
         (iVar3 = func_0x024ef040(iVar3,**(undefined4 **)(_UNK_0202514c + 0x2024fb8)), 0 < iVar3)) {
        iVar5 = *(int *)(iVar5 + 0x2c);
        iStack_48 = 1;
        iStack_44 = iVar8;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x024eee58(&uStack_40,iVar5,**(undefined4 **)(_UNK_02025150 + 0x2024fec));
        puVar7 = *(undefined4 **)(_UNK_02025154 + 0x2025004);
        puVar11 = *(undefined4 **)(_UNK_02025158 + 0x202500c);
        while (iVar5 = func_0x0151618c(&uStack_40,*puVar7), iVar8 = iStack_30, uVar10 = uStack_34,
              iVar5 != 0) {
          iVar5 = *(int *)(iVar4 + 0x48);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x024f3070(iVar5,uVar10,iVar8,*puVar11);
        }
        func_0x024eee68(&uStack_40,**(undefined4 **)(_UNK_0202515c + 0x2025058));
        iVar2 = iStack_48;
        iVar8 = iStack_44;
      }
      if (iVar2 != 0) {
        func_0x020240e8(iVar8,iVar4);
      }
    }
    else {
      iVar4 = func_0x029540a4(0x6a6,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x02869ba4(iVar4,iVar8,iVar5,1,0);
    }
    return;
  }
  return;
}

