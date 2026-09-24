
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dacb38(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [12];
  int iStack_3c;
  
  pcVar6 = (char *)(_UNK_01dacee8 + 0x1dacb58);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01daceec + 0x1dacb6c));
    func_0x01438628(*(undefined4 *)(_UNK_01dacef0 + 0x1dacb78));
    func_0x01438628(*(undefined4 *)(_UNK_01dacef4 + 0x1dacb84));
    func_0x01438628(*(undefined4 *)(_UNK_01dacef8 + 0x1dacb90));
    func_0x01438628(*(undefined4 *)(_UNK_01dacefc + 0x1dacb9c));
    func_0x01438628(*(undefined4 *)(_UNK_01dacf00 + 0x1dacba8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1315,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1315,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a0844 + 0x28a0764);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a0848 + 0x28a0778),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a084c + 0x28a0834));
    return iVar2;
  }
  iVar2 = FUN_01da3ff8(param_1);
  fVar1 = _UNK_01dacee4;
  if (iVar2 != 0) {
    iVar2 = 0;
    while( true ) {
      iVar8 = FUN_01da6be8(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar2) break;
      iVar8 = FUN_01da6be8(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x0152983c(iVar8,iVar2,**(undefined4 **)(_UNK_01dacf04 + 0x1dacc68));
      iVar3 = FUN_01da70cc(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      lVar14 = *(longlong *)(iVar3 + 0x20);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      fVar11 = *(float *)(iVar8 + 0x10) * fVar1;
      iStack_3c = iVar2;
      lVar12 = func_0x014e61a4(fVar11);
      lVar13 = func_0x014e6220(fVar11);
      if (fVar11 < 0.0) {
        lVar13 = lVar12;
      }
      lVar13 = lVar13 + lVar14;
      uVar10 = (uint)((ulonglong)lVar13 >> 0x20);
      iVar2 = FUN_01da70cc(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      fVar11 = *(float *)(iVar8 + 0x14) * fVar1;
      lVar12 = func_0x014e61a4(fVar11);
      lVar14 = func_0x014e6220(fVar11);
      if (fVar11 < 0.0) {
        lVar14 = lVar12;
      }
      lVar14 = lVar14 + *(longlong *)(iVar2 + 0x20);
      uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
      iVar2 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
      if (iVar2 == 0) {
        if (*(int *)(**(int **)(_UNK_01dacf08 + 0x1dacd7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01dacf0c + 0x1dacd98));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar15 = func_0x026ffbe0(iVar2,0);
        uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
        if (uVar10 < uVar4 || uVar4 - uVar10 < (uint)((uint)lVar13 <= (uint)uVar15)) {
          if (*(int *)(**(int **)(_UNK_01dacf10 + 0x1dacdd0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01dacf14 + 0x1dacdec));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar2,0);
          uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uVar10 <= uVar7 && (uint)((uint)lVar14 <= (uint)uVar15) <= uVar10 - uVar7) {
            if (0 < *(int *)(iVar8 + 0x24)) {
              iVar2 = FUN_01da70cc(param_1);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x30);
              uVar9 = *(undefined4 *)(iVar8 + 0xc);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x024f0540(iVar2,uVar9,**(undefined4 **)(_UNK_01dacf18 + 0x1dace60));
              if (iVar2 != 0) {
                iVar2 = FUN_01da70cc(param_1);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = *(int *)(iVar2 + 0x30);
                uVar9 = *(undefined4 *)(iVar8 + 0xc);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = func_0x03b70fac(iVar2,uVar9,**(undefined4 **)(_UNK_01dacf1c + 0x1daceac));
                if (*(int *)(iVar8 + 0x24) <= iVar2) goto LAB_01dacec0;
              }
            }
            goto LAB_01dacd58;
          }
        }
      }
      else {
LAB_01dacd58:
        iVar2 = func_0x01dacf20(param_1,iVar8);
        if (iVar2 != 0) {
          return iVar8;
        }
      }
LAB_01dacec0:
      iVar2 = iStack_3c + 1;
    }
  }
  return 0;
}

