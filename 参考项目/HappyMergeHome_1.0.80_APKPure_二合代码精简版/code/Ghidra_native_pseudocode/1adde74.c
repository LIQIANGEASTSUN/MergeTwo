
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01aede74(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [8];
  uint uStack_40;
  uint uStack_3c;
  
  pcVar6 = (char *)(_UNK_01aee2dc + 0x1aede94);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aee2e0 + 0x1aedea8));
    func_0x01438628(*(undefined4 *)(_UNK_01aee2e4 + 0x1aedeb4));
    func_0x01438628(*(undefined4 *)(_UNK_01aee2e8 + 0x1aedec0));
    func_0x01438628(*(undefined4 *)(_UNK_01aee2ec + 0x1aedecc));
    func_0x01438628(*(undefined4 *)(_UNK_01aee2f0 + 0x1aeded8));
    func_0x01438628(*(undefined4 *)(_UNK_01aee2f4 + 0x1aedee4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xd04,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xd04,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028921b4 + 0x28920d4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028921b8 + 0x28920e8),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028921bc + 0x28921a4));
    return iVar2;
  }
  iVar2 = FUN_01ae4df4(param_1);
  if (((iVar2 != 0) && (iVar2 = FUN_01ae99ac(param_1), iVar2 != 0)) &&
     (iVar2 = func_0x01af3750(param_1), fVar1 = _UNK_01aee2d8, iVar2 != 0)) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_01aee2f8 + 0x1aedf84);
    while( true ) {
      iVar9 = func_0x01af3750(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar2) break;
      iVar9 = func_0x01af3750(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x0152983c(iVar9,iVar2,*puVar8);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x20) == 1)) {
        iVar3 = FUN_01ae46e8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar9 + 0xc) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar14 = lVar14 + *(longlong *)(iVar3 + 8);
        uStack_3c = (uint)lVar14;
        uStack_40 = (uint)((ulonglong)lVar14 >> 0x20);
        iVar3 = FUN_01ae46e8(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar9 + 0x10) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar14 = lVar14 + *(longlong *)(iVar3 + 8);
        uVar11 = (uint)lVar14;
        uVar7 = (uint)((ulonglong)lVar14 >> 0x20);
        iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar8 = *(undefined4 **)(_UNK_01aee2fc + 0x1aee0c8);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_01aee300 + 0x1aee0d4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01aee304 + 0x1aee0f0));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar3,0);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uVar4 <= uStack_40 && (uint)(uStack_3c <= (uint)uVar15) <= uVar4 - uStack_40)
          goto LAB_01aee2b8;
        }
        if (*(int *)(**(int **)(_UNK_01aee308 + 0x1aee130) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01aee30c + 0x1aee14c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar15 = func_0x026ffbe0(iVar3,0);
        uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
        if (uVar4 <= uVar7 && (uint)(uVar11 <= (uint)uVar15) <= uVar4 - uVar7) {
          func_0x01af3890(param_1,uVar4,uVar11,uVar7);
          uVar10 = func_0x01af3b58(param_1);
          if (0 < *(int *)(iVar9 + 0x18)) {
            iVar3 = FUN_01ae99ac(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x18);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f0540(iVar3,uVar10,**(undefined4 **)(_UNK_01aee310 + 0x1aee1d8));
            if (iVar3 != 0) {
              iVar3 = FUN_01ae99ac(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x18);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x024f05d4(iVar3,uVar10,**(undefined4 **)(_UNK_01aee314 + 0x1aee220));
              if (*(int *)(iVar9 + 0x18) <= iVar3) {
                iVar3 = FUN_01ae99ac(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x44) != 1) goto LAB_01aee2b8;
              }
            }
          }
          iVar3 = FUN_01ae99ac(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0x24) <= *(int *)(iVar3 + 0x40)) {
            iVar3 = FUN_01ae99ac(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0x44) != 1) goto LAB_01aee2b8;
          }
          iVar3 = func_0x01af3cd8(param_1,iVar9);
          if (iVar3 != 0) {
            return iVar9;
          }
        }
      }
LAB_01aee2b8:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

