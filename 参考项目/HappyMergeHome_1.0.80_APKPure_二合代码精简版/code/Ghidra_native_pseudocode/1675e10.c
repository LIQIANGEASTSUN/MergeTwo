
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01685e10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_01686284 + 0x1685e30);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01686288 + 0x1685e44));
    func_0x01438628(*(undefined4 *)(_UNK_0168628c + 0x1685e50));
    func_0x01438628(*(undefined4 *)(_UNK_01686290 + 0x1685e5c));
    func_0x01438628(*(undefined4 *)(_UNK_01686294 + 0x1685e68));
    func_0x01438628(*(undefined4 *)(_UNK_01686298 + 0x1685e74));
    func_0x01438628(*(undefined4 *)(_UNK_0168629c + 0x1685e80));
    func_0x01438628(*(undefined4 *)(_UNK_016862a0 + 0x1685e8c));
    func_0x01438628(*(undefined4 *)(_UNK_016862a4 + 0x1685e98));
    func_0x01438628(*(undefined4 *)(_UNK_016862a8 + 0x1685ea4));
    func_0x01438628(*(undefined4 *)(_UNK_016862ac + 0x1685eb0));
    func_0x01438628(*(undefined4 *)(_UNK_016862b0 + 0x1685ebc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8770,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016862b4 + 0x1685f20) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016862b8 + 0x1685f3c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_016862bc + 0x1685f80);
      iVar7 = func_0x0152983c(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x28);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar7 + 0xc);
      iVar7 = func_0x0152983c(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0x2c) * iVar8 == 6) {
        iVar8 = FUN_0167c750(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar8 + 0x70) != 6) {
          iVar7 = 0;
          iVar8 = 0;
          puVar10 = *(undefined4 **)(_UNK_016862c8 + 0x1686018);
          puVar12 = *(undefined4 **)(_UNK_016862cc + 0x1686020);
          uStack_3c = param_1;
          while( true ) {
            iVar2 = func_0x0152983c(iVar1,0,*puVar11);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x28);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar9 = uStack_3c;
            if (*(int *)(iVar2 + 0xc) <= iVar7) break;
            if (*(int *)(**(int **)(_UNK_016862d0 + 0x1686064) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(*puVar10);
            iVar3 = func_0x0152983c(iVar1,0,*puVar11);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x28);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x024f0530(iVar3,iVar7,*puVar12);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02be153c(iVar2,uVar9,0);
            if (iVar2 != 0) {
              iVar2 = func_0x0152983c(iVar1,0,*puVar11);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar8 = *(int *)(iVar2 + 0x2c) + iVar8;
            }
            iVar7 = iVar7 + 1;
          }
          iVar2 = func_0x016862e4(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_0167c750(uVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar8) {
              iVar7 = FUN_0167c750(uVar9);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x0152983c(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_016862d4 + 0x16861e4) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_016862d8 + 0x168620c);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_016862dc + 0x1686224));
                *pcVar6 = '\x01';
              }
              uVar9 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_016862e0 + 0x1686240) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x024f12bc(uVar9,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_01686280) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_016862c0 + 0x1686124) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_016862c4 + 0x1686148),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x8770,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f56c0(auStack_48,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&stack0xffffffd0,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar9,&stack0xffffffd0,uVar5,0,0);
  iVar1 = func_0x024f56f0(&stack0xffffffd0,0,0);
  return iVar1;
}

