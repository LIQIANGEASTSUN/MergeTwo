
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03213204(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_03213678 + 0x3213224);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0321367c + 0x3213238));
    func_0x01438628(*(undefined4 *)(_UNK_03213680 + 0x3213244));
    func_0x01438628(*(undefined4 *)(_UNK_03213684 + 0x3213250));
    func_0x01438628(*(undefined4 *)(_UNK_03213688 + 0x321325c));
    func_0x01438628(*(undefined4 *)(_UNK_0321368c + 0x3213268));
    func_0x01438628(*(undefined4 *)(_UNK_03213690 + 0x3213274));
    func_0x01438628(*(undefined4 *)(_UNK_03213694 + 0x3213280));
    func_0x01438628(*(undefined4 *)(_UNK_03213698 + 0x321328c));
    func_0x01438628(*(undefined4 *)(_UNK_0321369c + 0x3213298));
    func_0x01438628(*(undefined4 *)(_UNK_032136a0 + 0x32132a4));
    func_0x01438628(*(undefined4 *)(_UNK_032136a4 + 0x32132b0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7e5f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032136a8 + 0x3213314) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032136ac + 0x3213330));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_032136b0 + 0x3213374);
      iVar7 = func_0x04cfd760(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x28);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar7 + 0xc);
      iVar7 = func_0x04cfd760(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0x2c) * iVar9 == 6) {
        iVar9 = FUN_03209df8(param_1);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar9 + 0x70) != 6) {
          iVar7 = 0;
          iVar9 = 0;
          puVar10 = *(undefined4 **)(_UNK_032136bc + 0x321340c);
          puVar12 = *(undefined4 **)(_UNK_032136c0 + 0x3213414);
          uStack_3c = param_1;
          while( true ) {
            iVar2 = func_0x04cfd760(iVar1,0,*puVar11);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x28);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar8 = uStack_3c;
            if (*(int *)(iVar2 + 0xc) <= iVar7) break;
            if (*(int *)(**(int **)(_UNK_032136c4 + 0x3213458) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x04e4a028(*puVar10);
            iVar3 = func_0x04cfd760(iVar1,0,*puVar11);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x28);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar8 = func_0x04cd26d0(iVar3,iVar7,*puVar12);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02be153c(iVar2,uVar8,0);
            if (iVar2 != 0) {
              iVar2 = func_0x04cfd760(iVar1,0,*puVar11);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar9 = *(int *)(iVar2 + 0x2c) + iVar9;
            }
            iVar7 = iVar7 + 1;
          }
          iVar2 = func_0x032136d8(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_03209df8(uVar8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar9) {
              iVar7 = FUN_03209df8(uVar8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x04cfd760(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_032136c8 + 0x32135d8) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_032136cc + 0x3213600);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_032136d0 + 0x3213618));
                *pcVar6 = '\x01';
              }
              uVar8 = VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_032136d4 + 0x3213634) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x05160af8(uVar8,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_03213674) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_032136b4 + 0x3213518) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_032136b8 + 0x321353c),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x7e5f,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f56c0(auStack_48,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&stack0xffffffd0,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar8,&stack0xffffffd0,uVar5,0,0);
  iVar1 = func_0x024f56f0(&stack0xffffffd0,0,0);
  return iVar1;
}

