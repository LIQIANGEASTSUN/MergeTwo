
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018f6c68(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  pcVar7 = (char *)(_UNK_018f7168 + 0x18f6c88);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f716c + 0x18f6c9c));
    func_0x01438628(*(undefined4 *)(_UNK_018f7170 + 0x18f6ca8));
    func_0x01438628(*(undefined4 *)(_UNK_018f7174 + 0x18f6cb4));
    func_0x01438628(*(undefined4 *)(_UNK_018f7178 + 0x18f6cc0));
    func_0x01438628(*(undefined4 *)(_UNK_018f717c + 0x18f6ccc));
    func_0x01438628(*(undefined4 *)(_UNK_018f7180 + 0x18f6cd8));
    func_0x01438628(*(undefined4 *)(_UNK_018f7184 + 0x18f6ce4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x13fb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x13fb,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028a2b34 + 0x28a2a54);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a2b38 + 0x28a2a68),param_1,0);
      *pcVar7 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
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
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&stack0xffffffd0,uVar6,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a2b3c + 0x28a2b24));
    return iVar2;
  }
  iVar2 = FUN_018f5e54(param_1);
  fVar1 = _UNK_018f714c;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar9 = *(undefined4 **)(_UNK_018f7188 + 0x18f6d64);
    while( true ) {
      iVar8 = func_0x018f9ed0(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar2) break;
      iVar8 = func_0x018f9ed0(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x0152983c(iVar8,iVar2,*puVar9);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0x24) == 1) {
        iVar3 = func_0x018f9728(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar8 + 0xc) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_3c = (uint)lVar13;
        uStack_40 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = func_0x018f9728(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar8 + 0x10) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_44 = (uint)lVar13;
        uStack_48 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = func_0x018f9728(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar3 + 0x50);
        uVar6 = *(undefined4 *)(iVar3 + 0x54);
        if (*(int *)(**(int **)(_UNK_018f718c + 0x18f6eac) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_018f7190 + 0x18f6ed0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x026ffbe0(iVar3,0);
        if (*(int *)(**(int **)(_UNK_018f7194 + 0x18f6f04) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02aedf90(uVar10,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0);
        iVar4 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar9 = *(undefined4 **)(_UNK_018f7198 + 0x18f6f58);
        if (iVar4 == 0) {
          if (*(int *)(**(int **)(_UNK_018f719c + 0x18f6f64) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018f71a0 + 0x18f6f80));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x026ffbe0(iVar4,0);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          if (uStack_40 < uVar5 || uVar5 - uStack_40 < (uint)(uStack_3c <= (uint)uVar14)) {
            if (*(int *)(**(int **)(_UNK_018f71a4 + 0x18f6fc0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_018f71a8 + 0x18f6fdc));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar14 = func_0x026ffbe0(iVar4,0);
            uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
            if (uVar5 <= uStack_48 && (uint)(uStack_44 <= (uint)uVar14) <= uVar5 - uStack_48)
            goto LAB_018f7010;
          }
        }
        else {
LAB_018f7010:
          if (0 < *(int *)(iVar8 + 0x1c)) {
            iVar4 = func_0x018f9728(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(iVar4 + 0x30);
            uVar10 = *(undefined4 *)(iVar8 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x024f0540(iVar4,uVar10,**(undefined4 **)(_UNK_018f71ac + 0x18f7058));
            if (iVar4 != 0) {
              iVar4 = func_0x018f9728(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar8 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x024f05d4(iVar4,uVar10,**(undefined4 **)(_UNK_018f71b0 + 0x18f70a4));
              if (*(int *)(iVar8 + 0x1c) <= iVar4) {
                iVar4 = func_0x018f9728(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_018f7144;
              }
            }
          }
          if (iVar3 != 0) {
            iVar3 = func_0x018f9728(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar8 + 0x28) <= *(int *)(iVar3 + 0x58)) {
              iVar3 = func_0x018f9728(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_018f7144;
            }
          }
          iVar3 = func_0x01904330(param_1,iVar8);
          if (iVar3 != 0) {
            return iVar8;
          }
        }
      }
LAB_018f7144:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

