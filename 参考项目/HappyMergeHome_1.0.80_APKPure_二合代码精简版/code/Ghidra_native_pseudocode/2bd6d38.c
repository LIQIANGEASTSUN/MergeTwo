
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be6d38(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02be7214 + 0x2be6d54);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be7218 + 0x2be6d68));
    func_0x01438628(*(undefined4 *)(_UNK_02be721c + 0x2be6d74));
    func_0x01438628(*(undefined4 *)(_UNK_02be7220 + 0x2be6d80));
    func_0x01438628(*(undefined4 *)(_UNK_02be7224 + 0x2be6d8c));
    func_0x01438628(*(undefined4 *)(_UNK_02be7228 + 0x2be6d98));
    func_0x01438628(*(undefined4 *)(_UNK_02be722c + 0x2be6da4));
    func_0x01438628(*(undefined4 *)(_UNK_02be7230 + 0x2be6db0));
    func_0x01438628(*(undefined4 *)(_UNK_02be7234 + 0x2be6dbc));
    func_0x01438628(*(undefined4 *)(_UNK_02be7238 + 0x2be6dc8));
    func_0x01438628(*(undefined4 *)(_UNK_02be723c + 0x2be6dd4));
    func_0x01438628(*(undefined4 *)(_UNK_02be7240 + 0x2be6de0));
    func_0x01438628(*(undefined4 *)(_UNK_02be7244 + 0x2be6dec));
    *pcVar4 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x02953fd4(0x5d25,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d25,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_02bad050(param_1,param_2);
  puVar10 = *(undefined4 **)(_UNK_02be7248 + 0x2be6e60);
  puVar11 = *(undefined4 **)(_UNK_02be724c + 0x2be6e68);
  piVar12 = *(int **)(_UNK_02be7250 + 0x2be6e70);
  uStack_28 = param_2;
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar5 + 0xc) <= iVar8) break;
    if (*(int *)(**(int **)(_UNK_02be7254 + 0x2be6ea4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(*puVar10);
    iVar6 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x03b780b0(iVar6,iVar8,**(undefined4 **)(_UNK_02be7258 + 0x2be6ee0));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(undefined4 *)(iVar6 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02c4ab68(iVar5,uVar9,0);
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_02be725c + 0x2be6f2c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02be7260 + 0x2be6f48));
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03b780b0(iVar6,iVar8,**(undefined4 **)(_UNK_02be7264 + 0x2be6f70));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(undefined4 *)(iVar6 + 8);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x029a6fa8(iVar5,uVar9,0);
      if (*(int *)(**(int **)(_UNK_02be7268 + 0x2be6fb8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(*puVar10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x02c4af88(iVar5,uVar9,0);
      if (iVar5 == 0) {
        if (*(int *)(**(int **)(_UNK_02be726c + 0x2be7008) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(*puVar11);
        iVar6 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = func_0x03b780b0(iVar6,iVar8,**(undefined4 **)(_UNK_02be7270 + 0x2be7044));
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_02be21bc(iVar5,uVar9,0);
        iVar5 = func_0x014e9518(*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_02bd9554(iVar5,iVar8,param_2);
        iVar5 = func_0x014e9518(*puVar11);
        iVar6 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = func_0x03b780b0(iVar6,iVar8,**(undefined4 **)(_UNK_02be7274 + 0x2be70c4));
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        FUN_02bd93c8(iVar5,uVar9);
        iVar5 = **(int **)(**(int **)(_UNK_02be7278 + 0x2be70f4) + 0x5c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02c3d868(iVar5,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02beba7c(iVar5,iVar8,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar6 = *piVar12;
        iVar5 = *(int *)(iVar5 + 0xc);
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar12;
        }
        iVar7 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x2c);
        if (iVar7 == 0) {
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar12;
          }
          uVar9 = **(undefined4 **)(iVar6 + 0x5c);
          iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02be727c + 0x2be719c));
          func_0x0152e3ec(iVar7,uVar9,**(undefined4 **)(_UNK_02be7280 + 0x2be71bc),0);
          piVar2 = (int *)(*(int *)(*piVar12 + 0x5c) + 0x2c);
          *piVar2 = iVar7;
          func_0x014385cc(piVar2,iVar7);
          param_2 = uStack_28;
        }
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02c2865c(iVar5,0,iVar7,0);
        puVar10 = *(undefined4 **)(_UNK_02be7284 + 0x2be7208);
      }
    }
    iVar8 = iVar8 + 1;
  }
  return;
}

