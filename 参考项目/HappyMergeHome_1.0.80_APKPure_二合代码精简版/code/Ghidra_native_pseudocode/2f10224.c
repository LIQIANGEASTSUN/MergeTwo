
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f20224(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [12];
  int iStack_3c;
  
  pcVar6 = (char *)(_UNK_02f205d4 + 0x2f20244);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f205d8 + 0x2f20258));
    func_0x01438628(*(undefined4 *)(_UNK_02f205dc + 0x2f20264));
    func_0x01438628(*(undefined4 *)(_UNK_02f205e0 + 0x2f20270));
    func_0x01438628(*(undefined4 *)(_UNK_02f205e4 + 0x2f2027c));
    func_0x01438628(*(undefined4 *)(_UNK_02f205e8 + 0x2f20288));
    func_0x01438628(*(undefined4 *)(_UNK_02f205ec + 0x2f20294));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1335,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1335,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a0f80 + 0x28a0ea0);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a0f84 + 0x28a0eb4),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar9,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a0f88 + 0x28a0f70));
    return iVar2;
  }
  iVar2 = FUN_02f1f4a4(param_1);
  fVar1 = _UNK_02f205d0;
  if (iVar2 != 0) {
    iVar2 = 0;
    while( true ) {
      iVar7 = func_0x02f23834(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0xc) <= iVar2) break;
      iVar7 = func_0x02f23834(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x04cfd760(iVar7,iVar2,**(undefined4 **)(_UNK_02f205f0 + 0x2f20354));
      iVar3 = func_0x02f23d18(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      lVar14 = *(longlong *)(iVar3 + 0x20);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      fVar11 = *(float *)(iVar7 + 0x10) * fVar1;
      iStack_3c = iVar2;
      lVar12 = func_0x014e61a4(fVar11);
      lVar13 = func_0x014e6220(fVar11);
      if (fVar11 < 0.0) {
        lVar13 = lVar12;
      }
      lVar13 = lVar13 + lVar14;
      uVar10 = (uint)((ulonglong)lVar13 >> 0x20);
      iVar2 = func_0x02f23d18(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      fVar11 = *(float *)(iVar7 + 0x14) * fVar1;
      lVar12 = func_0x014e61a4(fVar11);
      lVar14 = func_0x014e6220(fVar11);
      if (fVar11 < 0.0) {
        lVar14 = lVar12;
      }
      lVar14 = lVar14 + *(longlong *)(iVar2 + 0x20);
      uVar8 = (uint)((ulonglong)lVar14 >> 0x20);
      iVar2 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
      if (iVar2 == 0) {
        if (*(int *)(**(int **)(_UNK_02f205f4 + 0x2f20468) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f205f8 + 0x2f20484));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar15 = func_0x026ffbe0(iVar2,0);
        uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
        if (uVar10 < uVar4 || uVar4 - uVar10 < (uint)((uint)lVar13 <= (uint)uVar15)) {
          if (*(int *)(**(int **)(_UNK_02f205fc + 0x2f204bc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f20600 + 0x2f204d8));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar2,0);
          uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uVar10 <= uVar8 && (uint)((uint)lVar14 <= (uint)uVar15) <= uVar10 - uVar8) {
            if (0 < *(int *)(iVar7 + 0x24)) {
              iVar2 = func_0x02f23d18(param_1);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = *(int *)(iVar2 + 0x30);
              uVar9 = *(undefined4 *)(iVar7 + 0xc);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x046c26fc(iVar2,uVar9,**(undefined4 **)(_UNK_02f20604 + 0x2f2054c));
              if (iVar2 != 0) {
                iVar2 = func_0x02f23d18(param_1);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = *(int *)(iVar2 + 0x30);
                uVar9 = *(undefined4 *)(iVar7 + 0xc);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = func_0x03b70fac(iVar2,uVar9,**(undefined4 **)(_UNK_02f20608 + 0x2f20598));
                if (*(int *)(iVar7 + 0x24) <= iVar2) goto LAB_02f205ac;
              }
            }
            goto LAB_02f20444;
          }
        }
      }
      else {
LAB_02f20444:
        iVar2 = func_0x02f2c0fc(param_1,iVar7);
        if (iVar2 != 0) {
          return iVar7;
        }
      }
LAB_02f205ac:
      iVar2 = iStack_3c + 1;
    }
  }
  return 0;
}

