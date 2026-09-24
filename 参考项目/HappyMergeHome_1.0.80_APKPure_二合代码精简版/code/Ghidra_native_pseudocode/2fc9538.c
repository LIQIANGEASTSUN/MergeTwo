
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fd9538(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02fd9950 + 0x2fd9554);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd9954 + 0x2fd9568));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9958 + 0x2fd9574));
    func_0x01438628(*(undefined4 *)(_UNK_02fd995c + 0x2fd9580));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9960 + 0x2fd958c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9964 + 0x2fd9598));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9968 + 0x2fd95a4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd996c + 0x2fd95b0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9970 + 0x2fd95bc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9974 + 0x2fd95c8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd9978 + 0x2fd95d4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2133,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2133,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_38 = (undefined4 *)0x0;
    uStack_28 = 0;
    func_0x024f56c0(&puStack_50,0,param_2,0);
    puStack_38 = puStack_50;
    puStack_34 = (undefined4 *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,param_1,0);
    func_0x01523a2c(&puStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    iVar2 = func_0x024f56d0(iVar7,uVar9,&puStack_38,uVar4,0,0);
    return iVar2;
  }
  iVar2 = FUN_02fcfc38(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x6c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_02fd997c + 0x2fd9674);
  iVar2 = func_0x04cd2d7c(iVar2,param_2,*puVar10);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02fd9980 + 0x2fd9694) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd9984 + 0x2fd96b0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x38);
    iVar7 = 0;
    puVar11 = *(undefined4 **)(_UNK_02fd9988 + 0x2fd96d8);
    do {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) <= iVar7) {
        return *(int *)(iVar2 + 0xc);
      }
      iVar3 = func_0x04cfd760(iVar2,iVar7,*puVar11);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar7 = iVar7 + 1;
    } while (*(int *)(iVar3 + 0x24) != param_2);
    iVar7 = 0;
    while( true ) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) <= iVar7) break;
      iVar3 = func_0x04cfd760(iVar2,iVar7,*puVar11);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x24) <= param_2) {
        iVar3 = FUN_02fcfc38(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x6c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar3 + 0x10);
        iVar3 = func_0x04cfd760(iVar2,iVar7,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0x24);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x04cd2d7c(iVar6,uVar9,*puVar10);
        if (iVar3 == 0) {
          iVar3 = FUN_02fcfc38(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x04cfd760(iVar2,iVar7,*puVar11);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar9 = *(undefined4 *)(iVar6 + 0x24);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar9,**(undefined4 **)(_UNK_02fd998c + 0x2fd9850));
        }
      }
      iVar7 = iVar7 + 1;
    }
    func_0x02fdae2c(param_1);
    if (*(int *)(**(int **)(_UNK_02fd9990 + 0x2fd9874) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd9994 + 0x2fd9890));
    piVar8 = *(int **)(_UNK_02fd9998 + 0x2fd98a4);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    iVar6 = **(int **)(_UNK_02fd999c + 0x2fd98c4);
    iVar3 = *(int *)(iVar6 + 0x1c);
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x32c);
    if (iVar3 == 0) {
      func_0x014909d8(iVar6);
      iVar3 = *(int *)(iVar6 + 0x1c);
    }
    iVar7 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    uVar4 = **(undefined4 **)(iVar7 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,uVar4,0);
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar5 = '\x01';
    }
    uStack_28 = 0;
    uStack_2c = 0;
    iVar7 = func_0x02953fd4(0x226,0);
    if (iVar7 == 0) {
      iVar7 = *(int *)(iVar2 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x04753c80(iVar7,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      iVar7 = 0;
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar2 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x0475399c(iVar3,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar3 != 0) {
          iVar7 = *(int *)(iVar2 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x024f2f10(iVar7,0);
          if (iVar7 == 0) {
            iVar7 = *(int *)(iVar2 + 0x10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x024f2f20(iVar7,200,0);
            if (iVar7 == 0) {
              return 0;
            }
          }
          puStack_34 = &uStack_28;
          puStack_38 = &uStack_30;
          uStack_40 = 0;
          puStack_3c = &stack0xffffffdc;
          uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          FUN_0298fd74(uVar1,uVar9,uVar4);
          iVar2 = *(int *)(iVar2 + 0x18);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar2,uVar1,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_40);
          iVar7 = 1;
        }
      }
    }
    else {
      iVar7 = func_0x029540a4(0x226,0);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0;
      iVar7 = func_0x02871898(iVar7,iVar2,uVar9,uVar4);
    }
    return iVar7;
  }
  return iVar2;
}

