
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fca7d4(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [8];
  uint uStack_40;
  uint uStack_3c;
  
  pcVar6 = (char *)(_UNK_02fcac18 + 0x2fca7f4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fcac1c + 0x2fca808));
    func_0x01438628(*(undefined4 *)(_UNK_02fcac20 + 0x2fca814));
    func_0x01438628(*(undefined4 *)(_UNK_02fcac24 + 0x2fca820));
    func_0x01438628(*(undefined4 *)(_UNK_02fcac28 + 0x2fca82c));
    func_0x01438628(*(undefined4 *)(_UNK_02fcac2c + 0x2fca838));
    func_0x01438628(*(undefined4 *)(_UNK_02fcac30 + 0x2fca844));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x157e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x157e,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a594c + 0x28a586c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a5950 + 0x28a5880),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a5954 + 0x28a593c));
    return iVar2;
  }
  iVar2 = FUN_02fc9070(param_1);
  fVar1 = _UNK_02fcac14;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar9 = *(undefined4 **)(_UNK_02fcac34 + 0x2fca8c4);
    while( true ) {
      iVar8 = func_0x02fcf74c(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar2) break;
      iVar8 = func_0x02fcf74c(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x04cfd760(iVar8,iVar2,*puVar9);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0x24) == 1) {
        iVar3 = func_0x02fcfc38(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar8 + 0xc) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar14 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uStack_3c = (uint)lVar14;
        uStack_40 = (uint)((ulonglong)lVar14 >> 0x20);
        iVar3 = func_0x02fcfc38(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar8 + 0x10) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar13 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uVar11 = (uint)lVar13;
        uVar7 = (uint)((ulonglong)lVar13 >> 0x20);
        func_0x02fdc5c8(param_1,(int)((ulonglong)lVar14 >> 0x20),uVar11,uVar7);
        iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar9 = *(undefined4 **)(_UNK_02fcac38 + 0x2fcaa14);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_02fcac3c + 0x2fcaa20) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fcac40 + 0x2fcaa3c));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar3,0);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uStack_40 < uVar4 || uVar4 - uStack_40 < (uint)(uStack_3c <= (uint)uVar15)) {
            if (*(int *)(**(int **)(_UNK_02fcac44 + 0x2fcaa7c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fcac48 + 0x2fcaa98));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar15 = func_0x026ffbe0(iVar3,0);
            uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
            if (uVar4 <= uVar7 && (uint)(uVar11 <= (uint)uVar15) <= uVar4 - uVar7)
            goto LAB_02fcaac4;
          }
        }
        else {
LAB_02fcaac4:
          uVar10 = func_0x02fdc858(param_1);
          if (0 < *(int *)(iVar8 + 0x1c)) {
            iVar3 = func_0x02fcfc38(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x046c26fc(iVar3,uVar10,**(undefined4 **)(_UNK_02fcac4c + 0x2fcab14));
            if (iVar3 != 0) {
              iVar3 = func_0x02fcfc38(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x30);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b70fac(iVar3,uVar10,**(undefined4 **)(_UNK_02fcac50 + 0x2fcab5c));
              if (*(int *)(iVar8 + 0x1c) <= iVar3) {
                iVar3 = func_0x02fcfc38(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_02fcabf4;
              }
            }
          }
          iVar3 = func_0x02fcfc38(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar8 + 0x28) <= *(int *)(iVar3 + 0x58)) {
            iVar3 = func_0x02fcfc38(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_02fcabf4;
          }
          iVar3 = func_0x02fdc9d8(param_1,iVar8);
          if (iVar3 != 0) {
            return iVar8;
          }
        }
      }
LAB_02fcabf4:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

