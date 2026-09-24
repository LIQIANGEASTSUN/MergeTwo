
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0330afbc(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  
  pcVar9 = (char *)(_UNK_0330b5d4 + 0x330afdc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0330b5d8 + 0x330aff0));
    func_0x01438628(*(undefined4 *)(_UNK_0330b5dc + 0x330affc));
    func_0x01438628(*(undefined4 *)(_UNK_0330b5e0 + 0x330b008));
    func_0x01438628(*(undefined4 *)(_UNK_0330b5e4 + 0x330b014));
    func_0x01438628(*(undefined4 *)(_UNK_0330b5e8 + 0x330b020));
    func_0x01438628(*(undefined4 *)(_UNK_0330b5ec + 0x330b02c));
    func_0x01438628(*(undefined4 *)(_UNK_0330b5f0 + 0x330b038));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x13e6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x13e6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar9 = (char *)(_UNK_028a281c + 0x28a273c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a2820 + 0x28a2750),param_1,0);
      *pcVar9 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uVar8 = 2;
    if (iVar2 == 0) {
      uVar8 = 1;
    }
    func_0x024f56d0(iVar11,uVar12,&stack0xffffffd0,uVar8,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a2824 + 0x28a280c));
    return iVar2;
  }
  iVar2 = FUN_0330a8b0(param_1);
  fVar1 = _UNK_0330b094;
  if (iVar2 != 0) {
    iVar11 = 0;
    iVar2 = 0;
    puVar10 = *(undefined4 **)(_UNK_0330b5f4 + 0x330b0c0);
    while( true ) {
      iVar3 = func_0x0330e8d0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar11) break;
      iVar3 = func_0x0330f7b4(param_1);
      if (iVar3 != 0) {
        iVar2 = 1;
      }
      iVar3 = func_0x0330e8d0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x04cfd760(iVar3,iVar11,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x24) == iVar2) {
        iVar4 = func_0x0330edb4(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        fVar13 = *(float *)(iVar3 + 0xc) * fVar1;
        lVar14 = func_0x014e61a4(fVar13);
        lVar15 = func_0x014e6220(fVar13);
        if (fVar13 < 0.0) {
          lVar15 = lVar14;
        }
        lVar15 = lVar15 + *(longlong *)(iVar4 + 0x20);
        uStack_44 = (uint)lVar15;
        uStack_48 = (uint)((ulonglong)lVar15 >> 0x20);
        iVar4 = func_0x0330edb4(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        fVar13 = *(float *)(iVar3 + 0x10) * fVar1;
        iStack_40 = iVar2;
        iStack_3c = iVar11;
        lVar14 = func_0x014e61a4(fVar13);
        lVar15 = func_0x014e6220(fVar13);
        if (fVar13 < 0.0) {
          lVar15 = lVar14;
        }
        lVar15 = lVar15 + *(longlong *)(iVar4 + 0x20);
        uVar5 = (uint)((ulonglong)lVar15 >> 0x20);
        iVar2 = func_0x0330edb4(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar12 = *(undefined4 *)(iVar2 + 0x50);
        uVar8 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_0330b5f8 + 0x330b21c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0330b5fc + 0x330b23c));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar16 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_0330b600 + 0x330b270) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x02aedf90(uVar12,uVar8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0);
        iVar6 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar11 = iStack_3c;
        iVar2 = iStack_40;
        puVar10 = *(undefined4 **)(_UNK_0330b604 + 0x330b2c4);
        if (iVar6 == 0) {
          if (*(int *)(**(int **)(_UNK_0330b608 + 0x330b2d8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0330b60c + 0x330b2f4));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar16 = func_0x026ffbe0(iVar6,0);
          uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
          if (uStack_48 < uVar7 || uVar7 - uStack_48 < (uint)(uStack_44 <= (uint)uVar16)) {
            if (*(int *)(**(int **)(_UNK_0330b610 + 0x330b334) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0330b614 + 0x330b350));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar16 = func_0x026ffbe0(iVar6,0);
            uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
            if (uVar7 <= uVar5 && (uint)((uint)lVar15 <= (uint)uVar16) <= uVar7 - uVar5)
            goto LAB_0330b380;
          }
        }
        else {
LAB_0330b380:
          iVar6 = func_0x0330f7b4(param_1);
          if (iVar6 == 0) {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x0330edb4(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x046c26fc(iVar6,uVar12,**(undefined4 **)(_UNK_0330b620 + 0x330b508));
              if (iVar6 != 0) {
                iVar6 = func_0x0330edb4(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b70fac(iVar6,uVar12,**(undefined4 **)(_UNK_0330b624 + 0x330b558));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) goto LAB_0330b5b4;
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x0330edb4(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) goto LAB_0330b5b4;
            }
          }
          else {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x0330edb4(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x046c26fc(iVar6,uVar12,**(undefined4 **)(_UNK_0330b618 + 0x330b3dc));
              if (iVar6 != 0) {
                iVar6 = func_0x0330edb4(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b70fac(iVar6,uVar12,**(undefined4 **)(_UNK_0330b61c + 0x330b42c));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) {
                  iVar6 = func_0x0330edb4(param_1);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0x5c) != 1) goto LAB_0330b5b4;
                }
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x0330edb4(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) {
                iVar4 = func_0x0330edb4(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_0330b5b4;
              }
            }
          }
          iVar4 = func_0x03317ebc(param_1,iVar3);
          if (iVar4 != 0) {
            return iVar3;
          }
        }
      }
LAB_0330b5b4:
      iVar11 = iVar11 + 1;
    }
  }
  return 0;
}

