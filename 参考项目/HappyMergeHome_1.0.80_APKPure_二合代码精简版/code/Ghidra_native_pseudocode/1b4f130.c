
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5f130(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  
  pcVar6 = (char *)(_UNK_01b5f9fc + 0x1b5f14c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa00 + 0x1b5f160));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa04 + 0x1b5f16c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa08 + 0x1b5f178));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa0c + 0x1b5f184));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa10 + 0x1b5f190));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa14 + 0x1b5f19c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa18 + 0x1b5f1a8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa1c + 0x1b5f1b4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa20 + 0x1b5f1c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa24 + 0x1b5f1cc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa28 + 0x1b5f1d8));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa2c + 0x1b5f1e4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa30 + 0x1b5f1f0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa34 + 0x1b5f1fc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa38 + 0x1b5f208));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa3c + 0x1b5f214));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa40 + 0x1b5f220));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa44 + 0x1b5f22c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa48 + 0x1b5f238));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa4c + 0x1b5f244));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa50 + 0x1b5f250));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa54 + 0x1b5f25c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa58 + 0x1b5f268));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa5c + 0x1b5f274));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa60 + 0x1b5f280));
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa64 + 0x1b5f28c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa6a6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa6a6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02885010 + 0x2884f1c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02885014 + 0x2884f30),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    piStack_28 = (int *)0x0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    piStack_28 = (int *)uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_38,uVar4,0,0);
    uVar9 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02885018 + 0x2885000));
    return uVar9;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b5fa68 + 0x1b5f2ec));
  func_0x024eeca8(iVar1,0);
  if ((param_2 != 0) && (iVar8 = FUN_01b5ba7c(param_1), iVar8 != 0)) {
    iVar8 = FUN_01b5ba7c(param_1);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0x2c);
    uVar9 = *(undefined4 *)(param_2 + 8);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x024f1110(iVar8,uVar9,**(undefined4 **)(_UNK_01b5fa6c + 0x1b5f350));
    if (iVar8 == 0) {
      iVar8 = FUN_01b5ba7c(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x2c);
      uVar9 = *(undefined4 *)(param_2 + 8);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar8,uVar9,1,**(undefined4 **)(_UNK_01b5fa7c + 0x1b5f3a0));
      iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01b5fa80 + 0x1b5f3b4));
      func_0x024eed9c(iVar8,**(undefined4 **)(_UNK_01b5fa84 + 0x1b5f3c8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar12 = (int *)(iVar1 + 8);
      *piVar12 = iVar8;
      func_0x014385cc(piVar12,iVar8);
      if (*(int *)(**(int **)(_UNK_01b5fa88 + 0x1b5f3fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01b5fa8c + 0x1b5f418));
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      iStack_30 = iVar1;
      if ((iVar8 != 0) && (0 < *(int *)(iVar8 + 0xc))) {
        iVar5 = 0;
        puVar10 = *(undefined4 **)(_UNK_01b5fa90 + 0x1b5f458);
LAB_01b5f454:
        iVar2 = func_0x0152983c(iVar8,iVar5,*puVar10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 8) != *(int *)(param_2 + 8)) goto LAB_01b5f4ec;
        iVar2 = func_0x0152983c(iVar8,iVar5,*puVar10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0x10) == 0) goto LAB_01b5f4ec;
        iVar2 = func_0x0152983c(iVar8,iVar5,*puVar10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01b5f4ec;
        iVar2 = 0;
        while( true ) {
          iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar2) break;
          iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar9 = 0;
          if (*(int *)(iVar3 + 0x14) != 0) {
            iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (iVar2 < *(int *)(iVar3 + 0xc)) {
              iVar3 = func_0x0152983c(iVar8,iVar5,*puVar10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x14);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x024f0530(iVar3,iVar2,**(undefined4 **)(_UNK_01b5fa94 + 0x1b5f8cc));
            }
          }
          piStack_28 = (int *)uVar9;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar3 = *piVar12;
          iVar1 = func_0x0152983c(iVar8,iVar5,*puVar10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iStack_2c = iVar2;
          uVar9 = func_0x024f0530(iVar1,iVar2,**(undefined4 **)(_UNK_01b5fa98 + 0x1b5f92c));
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01b5fa9c + 0x1b5f948));
          func_0x02ca3c70(uVar4,uVar9,piStack_28,0,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar3 + 8);
          uVar7 = *(uint *)(iVar3 + 0xc);
          piVar11 = *(int **)(_UNK_01b5faa0 + 0x1b5f998);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar2 = *piVar11;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (uVar7 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar7 + 1;
            puVar10 = (undefined4 *)(iVar1 + uVar7 * 4 + 0x10);
            *puVar10 = uVar4;
            func_0x014385cc(puVar10,uVar4);
          }
          else {
            func_0x0152874c(iVar3,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
          puVar10 = *(undefined4 **)(_UNK_01b5faa4 + 0x1b5f9f4);
          iVar2 = iStack_2c + 1;
          iVar1 = iStack_30;
        }
      }
LAB_01b5f4fc:
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = *piVar12;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar8 + 0xc)) {
        iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01b5faa8 + 0x1b5f530));
        func_0x024f1124(iVar8,**(undefined4 **)(_UNK_01b5faac + 0x1b5f544));
        piStack_28 = (int *)(iVar1 + 0xc);
        *piStack_28 = iVar8;
        func_0x014385cc(piStack_28,iVar8);
        iVar1 = 0;
        puVar10 = *(undefined4 **)(_UNK_01b5fab0 + 0x1b5f574);
        piVar11 = *(int **)(_UNK_01b5fab4 + 0x1b5f57c);
        while( true ) {
          iVar8 = *piVar12;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar8 + 0xc) <= iVar1) break;
          iVar8 = *piVar12;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x0152983c(iVar8,iVar1,*puVar10);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x0202346c(0);
          if (iVar8 == 0) {
            func_0x014388e4();
            uVar9 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar9 = func_0x01524ffc(iVar8 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar8 + 0xc,0);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          func_0x020257a4(iVar5,0x2f0,uVar9,uVar4,0,0,0);
          iVar1 = iVar1 + 1;
        }
        if (*(int *)(**(int **)(_UNK_01b5fab8 + 0x1b5f6dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01b5fabc + 0x1b5f6f8));
        iVar8 = *piVar12;
        if (*(int *)(**(int **)(_UNK_01b5fac0 + 0x1b5f70c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01b5fac4 + 0x1b5f72c));
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar5 + 0x10);
        uVar9 = func_0x014388d4(**(undefined4 **)(_UNK_01b5fac8 + 0x1b5f74c));
        func_0x0152e3ec(uVar9,iStack_30,**(undefined4 **)(_UNK_01b5facc + 0x1b5f76c),0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = uVar9;
        func_0x02b75870(iVar1,iVar8,uVar4,1,0xeb,0,0,0);
        iVar1 = *piStack_28;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
  }
  piVar12 = *(int **)(_UNK_01b5fa70 + 0x1b5f670);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar6 = (char *)(_UNK_01b5fa74 + 0x1b5f68c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5fa78 + 0x1b5f6a0));
    *pcVar6 = '\x01';
  }
  iVar1 = *piVar12;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar12;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
LAB_01b5f4ec:
  iVar5 = iVar5 + 1;
  if (*(int *)(iVar8 + 0xc) <= iVar5) goto LAB_01b5f4fc;
  goto LAB_01b5f454;
}

