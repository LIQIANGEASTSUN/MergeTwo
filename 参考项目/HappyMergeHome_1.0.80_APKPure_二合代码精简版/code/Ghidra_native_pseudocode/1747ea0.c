
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01757ea0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
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
  
  pcVar5 = (char *)(_UNK_017582b8 + 0x1757ebc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017582bc + 0x1757ed0));
    func_0x01438628(*(undefined4 *)(_UNK_017582c0 + 0x1757edc));
    func_0x01438628(*(undefined4 *)(_UNK_017582c4 + 0x1757ee8));
    func_0x01438628(*(undefined4 *)(_UNK_017582c8 + 0x1757ef4));
    func_0x01438628(*(undefined4 *)(_UNK_017582cc + 0x1757f00));
    func_0x01438628(*(undefined4 *)(_UNK_017582d0 + 0x1757f0c));
    func_0x01438628(*(undefined4 *)(_UNK_017582d4 + 0x1757f18));
    func_0x01438628(*(undefined4 *)(_UNK_017582d8 + 0x1757f24));
    func_0x01438628(*(undefined4 *)(_UNK_017582dc + 0x1757f30));
    func_0x01438628(*(undefined4 *)(_UNK_017582e0 + 0x1757f3c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2087,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2087,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,param_1,0);
    func_0x01523a2c(&puStack_38,param_2,0);
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
    iVar1 = func_0x024f56d0(iVar8,uVar9,&puStack_38,uVar4,0,0);
    return iVar1;
  }
  iVar1 = FUN_0174e5a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x6c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar10 = *(undefined4 **)(_UNK_017582e4 + 0x1757fdc);
  iVar1 = func_0x024f0f34(iVar1,param_2,*puVar10);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017582e8 + 0x1757ffc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017582ec + 0x1758018));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    iVar8 = 0;
    puVar11 = *(undefined4 **)(_UNK_017582f0 + 0x1758040);
    do {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar8) {
        return *(int *)(iVar1 + 0xc);
      }
      iVar2 = func_0x0152983c(iVar1,iVar8,*puVar11);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar8 = iVar8 + 1;
    } while (*(int *)(iVar2 + 0x24) != param_2);
    iVar8 = 0;
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar8) break;
      iVar2 = func_0x0152983c(iVar1,iVar8,*puVar11);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0x24) <= param_2) {
        iVar2 = FUN_0174e5a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x6c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar2 + 0x10);
        iVar2 = func_0x0152983c(iVar1,iVar8,*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar2 + 0x24);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f0f34(iVar6,uVar9,*puVar10);
        if (iVar2 == 0) {
          iVar2 = FUN_0174e5a0(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x0152983c(iVar1,iVar8,*puVar11);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar9 = *(undefined4 *)(iVar6 + 0x24);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar2,uVar9,**(undefined4 **)(_UNK_017582f4 + 0x17581b8));
        }
      }
      iVar8 = iVar8 + 1;
    }
    func_0x01759794(param_1);
    if (*(int *)(**(int **)(_UNK_017582f8 + 0x17581dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017582fc + 0x17581f8));
    piVar7 = *(int **)(_UNK_01758300 + 0x175820c);
    iVar8 = *piVar7;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar7;
    }
    iVar6 = **(int **)(_UNK_01758304 + 0x175822c);
    iVar2 = *(int *)(iVar6 + 0x1c);
    uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x32c);
    if (iVar2 == 0) {
      func_0x014909d8(iVar6);
      iVar2 = *(int *)(iVar6 + 0x1c);
    }
    iVar8 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x0149097c();
    }
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x0149097c();
    }
    uVar4 = **(undefined4 **)(iVar8 + 0x5c);
    if (iVar1 == 0) {
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
    iVar8 = func_0x02953fd4(0x226,0);
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar1 + 0x14);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04753c80(iVar8,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      iVar8 = 0;
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar1 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x0475399c(iVar2,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar2 != 0) {
          iVar8 = *(int *)(iVar1 + 0x10);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x024f2f10(iVar8,0);
          if (iVar8 == 0) {
            iVar8 = *(int *)(iVar1 + 0x10);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar8 = func_0x024f2f20(iVar8,200,0);
            if (iVar8 == 0) {
              return 0;
            }
          }
          puStack_34 = &uStack_28;
          puStack_38 = &uStack_30;
          puStack_3c = &stack0xffffffdc;
          uStack_40 = 0;
          uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar3,uVar9,uVar4);
          iVar1 = *(int *)(iVar1 + 0x18);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar1,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_40);
          iVar8 = 1;
        }
      }
    }
    else {
      iVar8 = func_0x029540a4(0x226,0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0;
      iVar8 = func_0x02871898(iVar8,iVar1,uVar9,uVar4);
    }
    return iVar8;
  }
  return iVar1;
}

