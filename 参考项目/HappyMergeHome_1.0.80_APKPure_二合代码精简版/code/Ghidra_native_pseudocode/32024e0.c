
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032124e0(undefined4 param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_032128f8 + 0x32124fc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032128fc + 0x3212510));
    func_0x01438628(*(undefined4 *)(_UNK_03212900 + 0x321251c));
    func_0x01438628(*(undefined4 *)(_UNK_03212904 + 0x3212528));
    func_0x01438628(*(undefined4 *)(_UNK_03212908 + 0x3212534));
    func_0x01438628(*(undefined4 *)(_UNK_0321290c + 0x3212540));
    func_0x01438628(*(undefined4 *)(_UNK_03212910 + 0x321254c));
    func_0x01438628(*(undefined4 *)(_UNK_03212914 + 0x3212558));
    func_0x01438628(*(undefined4 *)(_UNK_03212918 + 0x3212564));
    func_0x01438628(*(undefined4 *)(_UNK_0321291c + 0x3212570));
    func_0x01438628(*(undefined4 *)(_UNK_03212920 + 0x321257c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1f6e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1f6e,0);
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
  iVar2 = FUN_03209df8(param_1);
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
  puVar10 = *(undefined4 **)(_UNK_03212924 + 0x321261c);
  iVar2 = func_0x04cd2d7c(iVar2,param_2,*puVar10);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_03212928 + 0x321263c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0321292c + 0x3212658));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x3c);
    iVar7 = 0;
    puVar11 = *(undefined4 **)(_UNK_03212930 + 0x3212680);
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
    } while (*(int *)(iVar3 + 0x1c) != param_2);
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
      if (*(int *)(iVar3 + 0x1c) <= param_2) {
        iVar3 = FUN_03209df8(param_1);
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
        uVar9 = *(undefined4 *)(iVar3 + 0x1c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x04cd2d7c(iVar6,uVar9,*puVar10);
        if (iVar3 == 0) {
          iVar3 = FUN_03209df8(param_1);
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
          uVar9 = *(undefined4 *)(iVar6 + 0x1c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar3,uVar9,**(undefined4 **)(_UNK_03212934 + 0x32127f8));
        }
      }
      iVar7 = iVar7 + 1;
    }
    func_0x03214ef8(param_1);
    if (*(int *)(**(int **)(_UNK_03212938 + 0x321281c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0321293c + 0x3212838));
    piVar8 = *(int **)(_UNK_03212940 + 0x321284c);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    iVar6 = **(int **)(_UNK_03212944 + 0x321286c);
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
          func_0x0298fd74(uVar1,uVar9,uVar4);
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

