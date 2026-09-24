
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018ccdc8(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_018cd23c + 0x18ccde8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cd240 + 0x18ccdfc));
    func_0x01438628(*(undefined4 *)(_UNK_018cd244 + 0x18cce08));
    func_0x01438628(*(undefined4 *)(_UNK_018cd248 + 0x18cce14));
    func_0x01438628(*(undefined4 *)(_UNK_018cd24c + 0x18cce20));
    func_0x01438628(*(undefined4 *)(_UNK_018cd250 + 0x18cce2c));
    func_0x01438628(*(undefined4 *)(_UNK_018cd254 + 0x18cce38));
    func_0x01438628(*(undefined4 *)(_UNK_018cd258 + 0x18cce44));
    func_0x01438628(*(undefined4 *)(_UNK_018cd25c + 0x18cce50));
    func_0x01438628(*(undefined4 *)(_UNK_018cd260 + 0x18cce5c));
    func_0x01438628(*(undefined4 *)(_UNK_018cd264 + 0x18cce68));
    func_0x01438628(*(undefined4 *)(_UNK_018cd268 + 0x18cce74));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x950a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018cd26c + 0x18cced8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cd270 + 0x18ccef4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_018cd274 + 0x18ccf38);
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
        iVar8 = FUN_018c3704(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar8 + 0x70) != 6) {
          iVar7 = 0;
          iVar8 = 0;
          puVar10 = *(undefined4 **)(_UNK_018cd280 + 0x18ccfd0);
          puVar12 = *(undefined4 **)(_UNK_018cd284 + 0x18ccfd8);
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
            if (*(int *)(**(int **)(_UNK_018cd288 + 0x18cd01c) + 0x74) == 0) {
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
          iVar2 = func_0x018cd29c(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_018c3704(uVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar8) {
              iVar7 = FUN_018c3704(uVar9);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x0152983c(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_018cd28c + 0x18cd19c) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_018cd290 + 0x18cd1c4);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_018cd294 + 0x18cd1dc));
                *pcVar6 = '\x01';
              }
              uVar9 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_018cd298 + 0x18cd1f8) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x024f12bc(uVar9,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_018cd238) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_018cd278 + 0x18cd0dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_018cd27c + 0x18cd100),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x950a,0);
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

