
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd8f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  
  pcVar8 = (char *)(_UNK_02bd9390 + 0x2bd8f88);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd9394 + 0x2bd8fa4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9398 + 0x2bd8fb0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd939c + 0x2bd8fbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd93a0 + 0x2bd8fc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd93a4 + 0x2bd8fd4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd6f,0);
  if (iVar1 == 0) {
    if (param_4 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd93a8 + 0x2bd9044) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd93ac + 0x2bd9060));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c4baac(iVar1,param_4,0);
      if (((iVar1 != 0) && (iVar1 = FUN_02bad204(param_1,param_3,param_5), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0xc) == 1)) {
        if (*(int *)(**(int **)(_UNK_02bd93b0 + 0x2bd90c0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd93b4 + 0x2bd90dc));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x026ffbe0(iVar2,0);
        uStack_40 = func_0x014e6e04((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1000,0);
        uVar5 = (undefined4)uStack_40;
        if (*(int *)(iVar1 + 0x3c) < 1) {
          uVar6 = *(uint *)(iVar1 + 0x1c);
          uVar3 = *(uint *)(iVar1 + 0x18) | uVar6;
          bVar11 = uVar3 == 0;
          if (bVar11) {
            uVar3 = *(uint *)(iVar1 + 0x48);
            uVar6 = *(uint *)(iVar1 + 0x4c);
          }
          if (bVar11 && (uVar3 == 0 && uVar6 == 0)) {
            iStack_50 = 0;
            FUN_026f6d70(iVar1,uVar6,uVar5,(int)((ulonglong)uStack_40 >> 0x20));
            iStack_50 = 0;
            FUN_026f72d8(iVar1,extraout_r1_01,uVar5,uStack_40._4_4_);
            uVar5 = func_0x02be1be8(param_1,param_4);
            FUN_026f7160(iVar1,uVar5,0);
          }
        }
        puVar10 = (uint *)(iVar1 + 0x18);
        if (*(char *)(param_4 + 0x59) == '\0') {
          puVar10 = (uint *)(iVar1 + 0x48);
        }
        uVar6 = *puVar10;
        uVar3 = puVar10[1];
        if (((uVar6 != 0 || uVar3 != 0) &&
            ((*(int *)(param_4 + 0x1c) != 99 || (*(int *)(iVar1 + 0x3c) < 1)))) &&
           (iVar2 = FUN_02bd84dc(param_1,param_4,iVar1), iVar2 != 0)) {
          dVar13 = (double)func_0x014e63e0((uint)uStack_40 - uVar6,
                                           uStack_40._4_4_ - (uVar3 + ((uint)uStack_40 < uVar6)));
          fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
          pcVar8 = (char *)(_UNK_02bd93b8 + 0x2bd91b4);
          if (*pcVar8 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02bd93bc + 0x2bd91cc));
            *pcVar8 = '\x01';
          }
          if (*(int *)(**(int **)(_UNK_02bd93c0 + 0x2bd91e4) + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar14 = func_0x0152635c((float)dVar13 / fVar12);
          uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
          iVar2 = (int)(float)uVar14;
          if ((float)uVar14 == _UNK_02bd938c) {
            iVar2 = -0x80000000;
          }
          if (0 < iVar2) {
            if (0x7fffffff < *(uint *)(iVar1 + 0x3c)) {
              FUN_026f7160(iVar1,0,0);
              uVar5 = extraout_r1;
            }
            iVar9 = *(int *)(iVar1 + 0x3c);
            if ((*(char *)(param_4 + 0x59) == '\0') || (uVar14 = uStack_40, iVar9 < 1)) {
              iVar4 = FUN_02bd7af0(param_1,param_4);
              FUN_026f7160(iVar1,iVar4 * iVar2 + iVar9,0);
              iVar2 = *(int *)(iVar1 + 0x3c);
              uVar14 = func_0x02be1be8(param_1,param_4);
              uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
              if (((int)uVar14 < iVar2) ||
                 (uVar14 = uStack_40, 0x7fffffff < *(uint *)(iVar1 + 0x3c))) {
                uVar5 = func_0x02be1be8(param_1,param_4);
                FUN_026f7160(iVar1,uVar5,0);
                uVar5 = extraout_r1_00;
                uVar14 = uStack_40;
              }
            }
            uStack_40._4_4_ = (int)((ulonglong)uVar14 >> 0x20);
            uStack_40._0_4_ = (uint)uVar14;
            iStack_50 = 0;
            FUN_026f72d8(iVar1,uVar5,(uint)uStack_40,uStack_40._4_4_);
            uStack_40 = uVar14;
            iVar1 = FUN_02bad050(param_1,param_5);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03b780b0(iVar1,param_3,**(undefined4 **)(_UNK_02bd93c4 + 0x2bd9304));
            pcVar8 = (char *)(_UNK_02bd9538 + 0x2bd93e4);
            if (*pcVar8 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02bd953c + 0x2bd93f8));
              func_0x01438628(*(undefined4 *)(_UNK_02bd9540 + 0x2bd9404));
              func_0x01438628(*(undefined4 *)(_UNK_02bd9544 + 0x2bd9410));
              *pcVar8 = '\x01';
            }
            iVar2 = func_0x02953fd4(0xd70,0);
            if (iVar2 == 0) {
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              FUN_026f7a74(iVar1,*(int *)(iVar1 + 0x80) + 1,0);
              uVar7 = *(undefined4 *)(iVar1 + 0x78);
              uVar5 = *(undefined4 *)(iVar1 + 0x7c);
              if (*(int *)(**(int **)(_UNK_02bd9548 + 0x2bd9490) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x02aedd4c(uVar7,uVar5,0);
              if (iVar2 == 0) {
                FUN_026f7a74(iVar1,0,0);
                if (*(int *)(**(int **)(_UNK_02bd954c + 0x2bd94dc) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd9550 + 0x2bd94f8));
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                uVar14 = func_0x026ffbe0(iVar2,0);
                uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
                FUN_026f79a4(iVar1,uVar5,(int)uVar14,uVar5);
              }
              return;
            }
            iVar2 = func_0x029540a4(0xd70,0);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x024f56c0(&iStack_50,0,iVar1,0);
            if (*(int *)(iVar2 + 0x10) != 0) {
              func_0x01523a6c(&stack0xffffffc8,*(int *)(iVar2 + 0x10),0);
            }
            func_0x01523a6c(&stack0xffffffc8,param_1,0);
            func_0x01523a6c(&stack0xffffffc8,iVar1,0);
            iVar9 = *(int *)(iVar2 + 8);
            uVar5 = *(undefined4 *)(iVar2 + 0xc);
            iVar1 = *(int *)(iVar2 + 0x10);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            uVar7 = 3;
            if (iVar1 == 0) {
              uVar7 = 2;
            }
            func_0x024f56d0(iVar9,uVar5,&stack0xffffffc8,uVar7,0,0);
            return;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd6f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_4c = param_5;
    uStack_48 = 0;
    iStack_50 = param_4;
    func_0x028930e4(iVar1,param_1,param_2,param_3);
  }
  return;
}

