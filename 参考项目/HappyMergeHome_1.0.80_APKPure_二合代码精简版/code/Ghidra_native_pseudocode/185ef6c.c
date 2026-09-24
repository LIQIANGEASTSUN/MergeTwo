
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0186ef6c(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  
  pcVar7 = (char *)(_UNK_0186f550 + 0x186ef8c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0186f554 + 0x186efa0));
    func_0x01438628(*(undefined4 *)(_UNK_0186f558 + 0x186efac));
    func_0x01438628(*(undefined4 *)(_UNK_0186f55c + 0x186efb8));
    func_0x01438628(*(undefined4 *)(_UNK_0186f560 + 0x186efc4));
    func_0x01438628(*(undefined4 *)(_UNK_0186f564 + 0x186efd0));
    func_0x01438628(*(undefined4 *)(_UNK_0186f568 + 0x186efdc));
    func_0x01438628(*(undefined4 *)(_UNK_0186f56c + 0x186efe8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x171d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x171d,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028a8438 + 0x28a8358);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a843c + 0x28a836c),param_1,0);
      *pcVar7 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
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
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar6,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a8440 + 0x28a8428));
    return iVar2;
  }
  iVar2 = FUN_0186d808(param_1);
  fVar1 = _UNK_0186f444;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_0186f570 + 0x186f068);
    while( true ) {
      iVar9 = func_0x01873378(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar2) break;
      iVar9 = func_0x01873378(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x0152983c(iVar9,iVar2,*puVar8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x24) == 1) {
        iVar3 = func_0x01873864(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0xc) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_40 = (uint)lVar13;
        uStack_44 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = func_0x01873864(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0x10) * fVar1;
        iStack_3c = iVar2;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_48 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar2 = func_0x01873864(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar2 + 0x50);
        uVar6 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_0186f574 + 0x186f1b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0186f578 + 0x186f1d0));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_0186f57c + 0x186f204) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02aedf90(uVar10,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0);
        iVar4 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar2 = iStack_3c;
        puVar8 = *(undefined4 **)(_UNK_0186f580 + 0x186f258);
        if (iVar4 == 0) {
          if (*(int *)(**(int **)(_UNK_0186f584 + 0x186f268) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0186f588 + 0x186f284));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x026ffbe0(iVar4,0);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          if (uStack_44 < uVar5 || uVar5 - uStack_44 < (uint)(uStack_40 <= (uint)uVar14)) {
            if (*(int *)(**(int **)(_UNK_0186f58c + 0x186f2c4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0186f590 + 0x186f2e0));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar14 = func_0x026ffbe0(iVar4,0);
            uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
            if (uVar5 <= uStack_48 && (uint)((uint)lVar13 <= (uint)uVar14) <= uVar5 - uStack_48)
            goto LAB_0186f310;
          }
        }
        else {
LAB_0186f310:
          iVar4 = func_0x01874684(param_1);
          if (iVar4 == 0) {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = func_0x01873864(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f0540(iVar4,uVar10,**(undefined4 **)(_UNK_0186f59c + 0x186f48c));
              if (iVar4 != 0) {
                iVar4 = func_0x01873864(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x024f05d4(iVar4,uVar10,**(undefined4 **)(_UNK_0186f5a0 + 0x186f4d8));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) goto LAB_0186f530;
              }
            }
            if (iVar3 != 0) {
              iVar3 = func_0x01873864(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) goto LAB_0186f530;
            }
          }
          else {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = func_0x01873864(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f0540(iVar4,uVar10,**(undefined4 **)(_UNK_0186f594 + 0x186f368));
              if (iVar4 != 0) {
                iVar4 = func_0x01873864(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x024f05d4(iVar4,uVar10,**(undefined4 **)(_UNK_0186f598 + 0x186f3b4));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) {
                  iVar4 = func_0x01873864(param_1);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_0186f530;
                }
              }
            }
            if (iVar3 != 0) {
              iVar3 = func_0x01873864(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) {
                iVar3 = func_0x01873864(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0186f530;
              }
            }
          }
          iVar3 = func_0x0187f85c(param_1,iVar9);
          if (iVar3 != 0) {
            return iVar9;
          }
        }
      }
LAB_0186f530:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

