
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01902594(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
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
  
  pcVar7 = (char *)(_UNK_01902b20 + 0x19025b0);
  uStack_38 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01902b24 + 0x19025c4));
    func_0x01438628(*(undefined4 *)(_UNK_01902b28 + 0x19025d0));
    func_0x01438628(*(undefined4 *)(_UNK_01902b2c + 0x19025dc));
    func_0x01438628(*(undefined4 *)(_UNK_01902b30 + 0x19025e8));
    func_0x01438628(*(undefined4 *)(_UNK_01902b34 + 0x19025f4));
    func_0x01438628(*(undefined4 *)(_UNK_01902b38 + 0x1902600));
    func_0x01438628(*(undefined4 *)(_UNK_01902b3c + 0x190260c));
    func_0x01438628(*(undefined4 *)(_UNK_01902b40 + 0x1902618));
    func_0x01438628(*(undefined4 *)(_UNK_01902b44 + 0x1902624));
    func_0x01438628(*(undefined4 *)(_UNK_01902b48 + 0x1902630));
    func_0x01438628(*(undefined4 *)(_UNK_01902b4c + 0x190263c));
    func_0x01438628(*(undefined4 *)(_UNK_01902b50 + 0x1902648));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5df7,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01902b54 + 0x19026a8));
    func_0x024eeca8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    piVar13 = (int *)(iVar2 + 8);
    *piVar13 = param_2;
    func_0x014385cc(piVar13,param_2);
    *(undefined4 *)(iVar2 + 0xc) = uStack_38;
    func_0x014385cc();
    iVar8 = *piVar13;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    piVar12 = *(int **)(_UNK_01902b58 + 0x1902710);
    puVar9 = *(undefined4 **)(_UNK_01902b5c + 0x1902718);
    while( true ) {
      iVar8 = iVar8 + -1;
      iVar5 = *piVar13;
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0152ae0c(0,iVar5 + -6,0);
      iVar6 = *piVar13;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (iVar8 < iVar5) break;
      iVar5 = func_0x0152983c(iVar6,iVar8,*puVar9);
      if (iVar5 != 0) {
        iVar5 = *piVar13;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x0152983c(iVar5,iVar8,*puVar9);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02c3f4b4(iVar5,0);
        if (0 < iVar5) {
          iVar5 = *piVar13;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x0152983c(iVar5,iVar8,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar11 = *(undefined4 *)(iVar5 + 0xc);
          if (*(int *)(**(int **)(_UNK_01902b60 + 0x1902800) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x024ef144(uVar11,0,0);
          if (iVar5 != 0) {
            iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01902b64 + 0x1902838));
            func_0x024eeca8(iVar5,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            piVar12 = (int *)(iVar5 + 0xc);
            *piVar12 = iVar2;
            func_0x014385cc(piVar12,iVar2);
            iVar6 = *piVar12;
            *(int *)(iVar5 + 8) = iVar8;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x0152983c(iVar6,iVar8,**(undefined4 **)(_UNK_01902b68 + 0x190289c));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uStack_34 = func_0x02c3f4b4(iVar6,0);
            iVar6 = *piVar12;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 8);
            puVar9 = *(undefined4 **)(_UNK_01902b6c + 0x19028e8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x0152983c(iVar6,iVar8,*puVar9);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024eecb8(iVar6,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&uStack_30,iVar6,0);
            uVar1 = uStack_28;
            uVar4 = uStack_2c;
            uVar11 = uStack_30;
            uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01902b70 + 0x1902960));
            func_0x0152e3ec(uVar3,iVar5,**(undefined4 **)(_UNK_01902b74 + 0x190297c),0);
            FUN_01901f6c(uStack_38,uStack_34,uVar11,uVar4,uVar1,uVar3);
            piVar12 = *(int **)(_UNK_01902b78 + 0x19029b4);
            puVar9 = *(undefined4 **)(_UNK_01902b7c + 0x19029bc);
          }
        }
        if (*(int *)(**(int **)(_UNK_01902b80 + 0x19029c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01902b84 + 0x19029e0));
        iVar6 = *piVar13;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0152983c(iVar6,iVar8,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar10 = *piVar13;
        uVar11 = *(undefined4 *)(iVar6 + 0x24);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0152983c(iVar10,iVar8,**(undefined4 **)(_UNK_01902b88 + 0x1902a3c));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar6 + 0x24);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uStack_4c = 1;
        uStack_48 = 0xffffffff;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_50 = uVar4;
        func_0x02bd2cf0(iVar5,uVar11,0xffffffff,10,0,0x18);
        puVar9 = *(undefined4 **)(_UNK_01902b8c + 0x1902aa8);
      }
    }
    if (6 < *(int *)(iVar6 + 0xc)) {
      uVar11 = func_0x014388d4(**(undefined4 **)(_UNK_01902b90 + 0x1902ac4));
      func_0x0152e3ec(uVar11,iVar2,**(undefined4 **)(_UNK_01902b94 + 0x1902ae0),0);
      if (*(int *)(**(int **)(_UNK_01902b98 + 0x1902af4) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x029a9e10(0x3f19999a,uVar11,0);
    }
    return;
  }
  iVar2 = func_0x029540a4(0x5df7,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar11 = uStack_38;
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,uVar11,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar2 + 8);
  uVar11 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar8,uVar11,&uStack_38,uVar4,0,0);
  return;
}

